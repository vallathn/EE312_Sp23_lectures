#include <iostream>
using namespace std;

struct Pixel {
    int r = 0; int g = 0; int b = 0;
    void print () {
        cout << "(" << r << ", " << g << ", " << b << ")";
    }
};

struct Picture {
    int width;
    int height;
    Pixel* image;

    Picture (int width, int height) {
        this->width = width;
        this->height = height;
        image = new Pixel[width * height];
    }

    void copy (const Picture& other) {
        width = other.width;
        height = other.height;
        image = new Pixel[width * height];
        for (int i = 0; i < width * height; i++) {
            image[i] = other.image[i];
        }
    }

    Picture(const Picture& other) {
        copy(other);
    }

    ~Picture() {
        delete [] image;
    }

    Picture& operator=(const Picture& rhs) {
        if (this != &rhs) {
            delete [] image;
            copy(rhs);
        }
        return *this;
    }

    Pixel& getPixel(int x, int y) {
        return image[y * width + x];
    }

    void printIntensities() {
        for (int r = 0; r < height; r++ ) {
            for (int c = 0; c < width; c++) {
                Pixel p = image[r*width + c];
                cout << p.r + p.b + p.g << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main() {
    Picture p(2, 3);
    p.image[0].r = p.image[0].b = p.image[0].g = 2;
    p.image[2].r = p.image[2].b = p.image[2].g = 3;
    p.image[5].r = p.image[5].b = p.image[5].g = 5;
    Picture p2(2, 3);
    p2 = p;
    p2.printIntensities();
    p2.getPixel(0, 1).print();
    cout << endl;
    Picture p3(p2);
    p3.getPixel(0, 1).print();
    cout << endl;
    return 0;
}

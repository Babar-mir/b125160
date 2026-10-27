#include <iostream>
using namespace std;

class Compressor {
public:
    virtual double compress(double fileSize) { return fileSize; }
    virtual ~Compressor() {}
};
class TextCompressor : public Compressor {
public:
    double compress(double fileSize) override { return 0.40 * fileSize; }
};
class ImageCompressor : public Compressor {
public:
    double compress(double fileSize) override { return 0.70 * fileSize; }
};

int main() {
    double textSize, imgSize;
    cout << "Enter text file size (MB): "; cin >> textSize;
    cout << "Enter image file size (MB): "; cin >> imgSize;
    TextCompressor tc; ImageCompressor ic;
    Compressor *c1 = &tc, *c2 = &ic;
    cout << "Text : original = " << textSize << " MB, compressed = " << c1->compress(textSize) << " MB" << endl;
    cout << "Image: original = " << imgSize  << " MB, compressed = " << c2->compress(imgSize)  << " MB" << endl;
    return 0;
}
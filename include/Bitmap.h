#ifndef BITMAPHEADER_H
#define BITMAPHEADER_H
#include <fstream>
#include <iosfwd>
#include <vector>

using namespace std;

class Bitmap {
    static const vector<int8_t> HEADER;
    ofstream file;

public:
    explicit Bitmap(string filename);

    ~Bitmap();

    void append(const vector<int8_t> &data);

    Bitmap(const Bitmap &) = delete;

    Bitmap &operator=(const Bitmap &) = delete;
};

#endif

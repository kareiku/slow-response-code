#include <fstream>
#include <iostream>

#include "../include/Bitmap.h"

int main(const int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    try {
        auto bitmap = Bitmap(argv[1]);
        bitmap.append(vector<int8_t>{0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08});
    } catch (const std::exception &ex) {
        cerr << "Error: " << ex.what() << endl;
        return 2;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// ---------------- 4. Music Playlist ----------------
class Song {
private:
    string songName;
    string artistName;
    int duration; // duration in seconds

public:
    Song(string name, string artist, int dur) {
        songName = name;
        artistName = artist;
        duration = dur;
    }

    // Friend function declaration
    friend void compareSongs(Song s1, Song s2);
};

// Friend function definition
void compareSongs(Song s1, Song s2) {
    cout << "----- Song 1 -----" << endl;
    cout << "Name   : " << s1.songName << endl;
    cout << "Artist : " << s1.artistName << endl;
    cout << "Duration: " << s1.duration << " sec" << endl;

    cout << "----- Song 2 -----" << endl;
    cout << "Name   : " << s2.songName << endl;
    cout << "Artist : " << s2.artistName << endl;
    cout << "Duration: " << s2.duration << " sec" << endl;

    cout << "----- Comparison -----" << endl;
    if (s1.duration > s2.duration)
        cout << s1.songName << " is longer than " << s2.songName << endl;
    else if (s2.duration > s1.duration)
        cout << s2.songName << " is longer than " << s1.songName << endl;
    else
        cout << "Both songs have the same duration" << endl;
}

// ---------------- Main ----------------
int main() {
    Song song1("Shape of You", "Ed Sheeran", 233);
    Song song2("Believer", "Imagine Dragons", 204);

    compareSongs(song1, song2);

    cout << endl;

    Song song3("Numb", "Linkin Park", 186);
    Song song4("In the End", "Linkin Park", 186);

    compareSongs(song3, song4);

    return 0;
}
/*Name - Pawan Chondhe
Roll no - C02022
Music Class (Constructors)
*/

#include <iostream>
#include <string>
using namespace std;

class music
{
    int trackId;
    float length;
    string title;
    string singer;
    string category;

public:
    // Default Constructor
    music()
    {
        trackId = 0;
        length = 0.0;
        title = "";
        singer = "";
        category = "";
    }

    // Parameterized Constructor
    music(int sId, float dur, string sTitle, string sArtist, string sAlbum, string sGenre)
    {
        trackId = sId;
        singer = sArtist;
        title = sTitle;
        category = sGenre;
        length = dur;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy Constructor
    music(music &obj)
    {
        trackId = obj.trackId;
        singer = obj.singer;
        title = obj.title;
        category = obj.category;
        length = obj.length;
        cout << "Copy constructor called" << endl;
    }

    void input()
    {
        cout << "Enter the name of song: ";
        cin.ignore();
        getline(cin, title);
        cout << "\nEnter the name of artist: ";
        getline(cin, singer);
        cout << "\nEnter the Genre of song: ";
        getline(cin, category);
        cout << "\nEnter the song ID: ";
        cin >> trackId;
        cout << "\nEnter the duration of song: ";
        cin >> length;
    }

    void display()
    {
        cout << "\nThe Song: " << title << endl;
        cout << "The artist name: " << singer << endl;
        cout << "The genre: " << category << endl;
        cout << "The id: " << trackId << endl;
        cout << "The Duration: " << length << endl;
    }
};

int main()
{
    music track1;
    track1.input();
    track1.display();

    music track2(205, 3.55, "Believer", "Imagine Dragons", "Evolve", "Rock");
    track2.display();

    music track3(track2);
    track3.display();

    return 0;
}

/*
OUTPUT:
Enter the name of song: Blinding Lights
Enter the name of artist: The Weeknd
Enter the Genre of song: Synth-pop
Enter the song ID: 201
Enter the duration of song: 3.2

The Song: Blinding Lights
The artist name: The Weeknd
The genre: Synth-pop
The id: 201
The Duration: 3.2
Parameterized constructor called

The Song: Believer
The artist name: Imagine Dragons
The genre: Rock
The id: 205
The Duration: 3.55
Copy constructor called

The Song: Believer
The artist name: Imagine Dragons
The genre: Rock
The id: 205
The Duration: 3.55
*/
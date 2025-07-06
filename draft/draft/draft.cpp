#include <iostream>
#include <string>
#include <vector>
#include <windows.h> // For Windows console functions

using namespace std;

// Set console to UTF-8 and enable virtual terminal processing
void setupConsole() {

}

// Function to print colored Japanese text
void printColoredJapanese(const string& text, int colorCode) {
    // ANSI color codes: 31-37 (standard), 91-97 (bright)
    cout << "\x1b[38;2;31;221;123m";
    cout << text;
}

int main() {
    setupConsole();
    SetConsoleOutputCP(65001);

    // Sample Japanese characters
    vector<string> kanji = {
        u8"愛", u8"平和", u8"勇気", u8"希望", u8"幸せ",
        u8"桜", u8"忍者", u8"侍", u8"龍", u8"虎"
    };

    vector<string> hiragana = {
        u8"あ", u8"い", u8"う", u8"え", u8"お",
        u8"か", u8"き", u8"く", u8"け", u8"こ"
    };

    vector<string> katakana = {
        u8"ア", u8"イ", u8"ウ", u8"エ", u8"オ",
        u8"カ", u8"キ", u8"ク", u8"ケ", u8"コ"
    };

    // Print colored kanji
    cout << u8"Kanji (漢字):\n";
    for (size_t i = 0; i < kanji.size(); ++i) {
        printColoredJapanese(kanji[i], 31 + (i % 7)); // Rotate through ANSI colors 31-37
        cout << " ";
    }
    cout << "\n\n";

    // Print colored hiragana
    cout << "Hiragana (ひらがな):\n";
    for (size_t i = 0; i < hiragana.size(); ++i) {
        printColoredJapanese(hiragana[i], 91 + (i % 7)); // Use bright colors 91-97
        cout << " ";
    }
    cout << "\n\n";

    // Print colored katakana
    cout << "Katakana (カタカナ):\n";
    for (size_t i = 0; i < katakana.size(); ++i) {
        printColoredJapanese(katakana[i], 31 + (i % 7));
        cout << " ";
    }
    cout << "\n";

    // Print a colorful Japanese message
    cout << "\nMessage: ";
    printColoredJapanese(u8"こんにちは", 92); // Bright green
    printColoredJapanese(u8"世界", 94);      // Bright blue
    printColoredJapanese(u8"！", 91);        // Bright red
    cout << "\n";

    return 0;
}
#include "Book.h"


int main()
{
    ////1
    // 
    //map<string, int> words;
    //string input = "";
    //while (true) {
    //    cin >> input;
    //    if (input == "stop") {
    //        break;
    //    }
    //    words[input]++;
    //    //auto item = words.find(input);
    //    //if (item == words.end()) { //adding new node
    //    //    //words.insert(pair<string, int>(input, 1));
    //    //    words[input] = 1;
    //    //}
    //    //else {
    //    //    //item->second++;
    //    //    words[input]++;
    //    //}
    //}
    //cout << "--------------------------" << endl;

    ///*for (auto node : words) {
    //    cout << node.first << " " << node.second << endl;
    //}*/

    //for (auto it = words.begin(); it != words.end(); it++) {
    //    cout << it->first << " " << it->second << endl;
    //}
    // 
    ////2
    //
    /*Book a;
    a.showBook();
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
    a.findByDate(Date());
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
    a.findByEvent("123");
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
    a.findByEvent("Cinema");
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
    a.delEvent(Date(), "C++");
    a.delEvent(Date(), "Cinema");
    a.delEvent(Date(2025,1,1), "New Year");
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
    a.showBook();*/

    //3

    map<string, string> users;
    vector<string> signInUsers;

    string input;
    cout << "REGISTER" << endl;
    cout << "LOGIN" << endl;
    cout << "LOGOUT" << endl;
    cout << endl;
    while (true) {
        cin >> input;
        if (input == "stop") break;
        if (input == "REGISTER") {
            string username;
            string password;
            cout << "Username: ";
            cin >> username;
            cout << "Password: ";
            cin >> password;
            //users[username] = password;
            auto item = users.find(username);
            if (item == users.end()) { //adding new node
                users[username] = password;
                cout << "succes: new user added" << endl;
            }
            else {
                cout << "fail: user already exists" << endl;
            }
        }
        else if (input == "LOGIN") {
            string username;
            cout << "Username: ";
            cin >> username;
            
            auto item = users.find(username);
            if (item == users.end()) {
                cout << "fail: no such user" << endl;
            }
            else {
                string password; 
                cout << "Password: ";
                cin >> password;
                auto itSignIn = find(signInUsers.begin(), signInUsers.end(), username);
                if (password == item->second && itSignIn == signInUsers.end()) {
                    signInUsers.push_back(username);
                    cout << "success: user logged in" << endl;
                }
                else if (itSignIn != signInUsers.end()) {
                    cout << "fail: already logged in" << endl;
                }
                else {
                    cout << "fail: incorrect password" << endl;
                }
            }
        }
        else if (input == "LOGOUT") {
            string username;
            cout << "Username: ";
            cin >> username;

            auto item = users.find(username);
            if (item == users.end()) {
                cout << "fail: no such user" << endl;
            }
            else {
                auto itSignIn = find(signInUsers.begin(), signInUsers.end(), username);
                if (itSignIn != signInUsers.end()) {
                    signInUsers.erase(itSignIn);
                    cout << "success: user logged out" << endl;
                }
                else if (itSignIn == signInUsers.end()) {
                    cout << "fail: already logged out" << endl;
                }
            }
        }
        
    }

}


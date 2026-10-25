# C++ Course — IT Step Academy

My classwork and homework from the C++ programming course at **IT Step Academy**: around 80 small projects that go from the first `cout` all the way to inheritance, exceptions, hand-written data structures and smart pointers.

Every lesson is a separate Visual Studio project, so each folder can be opened and run on its own.

## Highlights

| Project | What it is | Topics |
|---|---|---|
| [`TouristAgency_FinalProject`](TouristAgency_FinalProject) | **Final OOP project.** Console travel agency with sign-up / sign-in, user and manager roles, account balance, and buying, adding, editing, searching and sorting tours (cruises, hiking tours, health tours). Data is saved to text files. | Inheritance, polymorphism, `typeid`, custom exceptions, namespaces, file I/O |
| [`lesson13hw`](lesson13hw) | **Final project for C++ Basics.** Cinema app with ~20 films: sorting by rating, search by title / director / genre, a ticket basket, and receipts saved to a file. Includes a presentation. | Structs, dynamic arrays, function templates, header files, files |
| [`lesson35hwRPN`](lesson35hwRPN) | Evaluator for expressions in Reverse Polish Notation, built on a custom stack | Stack |
| [`lesson35hwStackSiteHistory`](lesson35hwStackSiteHistory) | Browser back/forward history | Stack |
| [`lesson36hwMulticooker`](lesson36hwMulticooker) | Multicooker simulation where ingredients go through a priority queue | Queue, priority queue |
| [`lesson38hwViolationDatabase(Map)`](lesson38hwViolationDatabase(Map)) | Traffic-violation database keyed by car number | `std::map` |
| [`lesson37hwAirTickets`](lesson37hwAirTickets) | Air ticket search by destination and date range | `std::set` |
| [`lesson32hw`](lesson32hw) | Zoo with animal class hierarchy and its own exception type | Inheritance, exceptions |

## Course map

`cw` = classwork, `hw` = homework.

### Part 1 — C++ Basics (lessons 1–17)

| Lessons | Topics |
|---|---|
| 1–3 | Output, `setlocale`, variables, `enum`, `switch`, loops |
| 4–5 | Arrays, 2D arrays, random numbers |
| 6–7 | Functions, function templates, finding roots |
| 8–9 | Pointers, dynamic arrays |
| 10–11 | Lambdas, C-strings, `atoi` |
| 12 | Dynamic 2D arrays |
| 13–14 | Structs, dynamic objects; **final project** (`lesson13hw`) |
| 15–16 | Text and binary files |
| 17 | Preprocessor and `#define` |

### Part 2 — Object-Oriented Programming (lessons 18–33)

| Lessons | Topics |
|---|---|
| 18–19 | Classes, arrays of dynamic objects |
| 21–25 | Composition (pharmacy, tourist agency, bus schedule, order system), operator overloading |
| 26–28 | Inheritance and multiple inheritance (shop items, printer + scanner = Xerox, vehicles, animals) |
| 29–31 | Virtual functions, abstract classes, `dynamic_cast`, nested classes |
| 32–33 | Exceptions and custom exception classes |
| Final | **`TouristAgency_FinalProject`** |

### Part 3 — Data Structures and the STL (lessons 34–39)

| Lessons | Topics |
|---|---|
| 34 | Singly and doubly linked lists, taxi task |
| 35 | Stack — RPN calculator, browser history |
| 36 | Queue and priority queue |
| 37 | Binary search tree — train timetable; `std::set` — air tickets |
| 38 | `std::map` |
| 39 | Smart pointers — library system |

### Other files

- `ArrayTemplate.h`, `DoubleArrayTemplate.h` — my reusable helper templates for 1D and 2D dynamic arrays, copied into many lessons.
- `P32/` — struct snippets.
- `draft/` — scratch project for experimenting with date and time classes.
- `Exam.txt`, `ТЗ на розробку проєкту uk-UA.docx` — the description and the brief for the Basics final project.

## Running the code

The projects were written in **Visual Studio** on Windows (MSVC). The `.sln` / `.vcxproj` files aren't in the repo, so the easiest way is:

1. Create an empty C++ console project in Visual Studio.
2. Add all `.cpp` and `.h` files from the lesson's inner folder (for example `lesson32hw/lesson32hw/`).
3. Build and run. Text files that a program reads (e.g. `info-users.txt`) need to sit next to the source files, which is Visual Studio's default working directory.

With GCC or Clang most lessons build with `g++ -std=c++17 *.cpp`, but a few use MSVC-only functions such as `localtime_s`, so they need small changes outside Visual Studio.

## Notes

- This is a learning repository: the code shows how my C++ developed over the course, so the early lessons are much simpler (and rougher) than the later ones.
- Comments and some program text are in Ukrainian, the language the course was taught in.

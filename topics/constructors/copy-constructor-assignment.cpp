class Foo {
public:
    Foo(const Foo&) { std::cout << 'C'; }
};

Foo f;     // default constructor
Foo g = f; // alternative syntax, prints C

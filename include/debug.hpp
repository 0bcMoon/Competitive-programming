#ifndef DEBUG_H
#define DEBUG_H
#include <set>
#include <map>
#include <iostream>

template<typename K, typename V>
std::ostream& operator<<(std::ostream& os, const std::pair<K, V>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}
// A debug macro for single or multiple arguments
// Overloads for printing containers
template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
    os << "[";
    for (int i = 0; i < (int)v.size(); i++) {
        if (i > 0) os << ", ";
        os << v[i];
    }
    os << "]";
    return os;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::set<T>& s) {
    os << "{";
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (it != s.begin()) os << ", ";
        os << *it;
    }
    os << "}";
    return os;
}


template<typename K, typename V>
std::ostream& operator<<(std::ostream& os, const std::map<K, V>& m) {
    os << "{";
    for (auto it = m.begin(); it != m.end(); ++it) {
        if (it != m.begin()) os << ", ";
        os << it->first << ": " << it->second;
    }
    os << "}";
    return os;
}


template<typename T>
void debug_out(const T& value) {
    std::cerr << value << "\n";
}

template<typename T, typename... Args>
void debug_out(const T& first, const Args&... rest) {
    std::cerr << first << " ";
    debug_out(rest...);
}

#define dbg(...) std::cerr << "(" << #__VA_ARGS__ << "): ", debug_out(__VA_ARGS__)
#endif // !DEBUG

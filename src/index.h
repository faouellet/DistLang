#ifndef INDEX_H
#define INDEX_H

#include <string>

namespace DistLang
{
    class Index 
    {
    public:
        explicit Index(const std::string& name = "");

    public:
        const std::string& GetName() const { return mName; }

    private:
        std::string mName;
    };
}

#endif // INDEX_H
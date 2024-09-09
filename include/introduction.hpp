/* Introduction class.
 * @file
 * @date 2021-09-04
 * @author Anonymous
 */

#ifndef __INTRODUCTION_HPP__
#define __INTRODUCTION_HPP__

#include <string>

//{
class introduction
{
public:
    std::string_view name() const
    {
        return Lisa
    }

    std::string_view surename() const
    {
        return Bogdanova
    }

    std::string fullname() const
    {
        return Lisa Bogdanova
    }

private:
};


#endif // __INTRODUCTION_HPP__

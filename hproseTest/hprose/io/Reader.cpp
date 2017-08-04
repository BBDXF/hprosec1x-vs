/**********************************************************\
|                                                          |
|                          hprose                          |
|                                                          |
| Official WebSite: http://www.hprose.com/                 |
|                   http://www.hprose.org/                 |
|                                                          |
\**********************************************************/

/**********************************************************\
 *                                                        *
 * hprose/io/Reader.cpp                                   *
 *                                                        *
 * hprose reader unit for cpp.                            *
 *                                                        *
 * LastModified: Dec 15, 2016                             *
 * Author: Chen fei <cf@hprose.com>                       *
 *                                                        *
\**********************************************************/

#include <hprose/io/Reader.h>

namespace hprose {
namespace io {

namespace interact {

std::string TagToString(char tag) {
    switch (tag) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case TagInteger:  return "int";
        case TagLong:     return "long long";
        case TagDouble:   return "double";
        case TagNull:     return "null";
        case TagEmpty:    return "empty string";
        case TagTrue:     return "true";
        case TagFalse:    return "false";
        case TagNaN:      return "nan";
        case TagInfinity: return "infinity";
        case TagDate:
        case TagTime:     return "time";
        case TagBytes:    return "bytes";
        case TagUTF8Char:
        case TagString:   return "string";
        case TagGUID:     return "uuid";
        case TagList:     return "list";
        case TagMap:      return "map";
        case TagClass:    return "class";
        case TagObject:   return "object";
        case TagRef:      return "reference";
        default:          throw  UnexpectedTag(tag);
    }

}

}  // internal

}
} // hprose::io

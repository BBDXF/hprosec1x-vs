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
 * hprose/io/decoders/ListDecoder.h                       *
 *                                                        *
 * hprose list decoder for cpp.                           *
 *                                                        *
 * LastModified: Nov 14, 2016                             *
 * Author: Chen fei <cf@hprose.com>                       *
 *                                                        *
\**********************************************************/

#pragma once

namespace hprose {
namespace io {

class Reader;

namespace decoders {

template<class T>
void ListDecode(T &v, Reader &reader, char tag);

}
}
} // hprose::io::decoders

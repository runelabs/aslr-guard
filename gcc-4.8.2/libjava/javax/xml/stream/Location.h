
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_stream_Location__
#define __javax_xml_stream_Location__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace stream
      {
          class Location;
      }
    }
  }
}

class javax::xml::stream::Location : public ::java::lang::Object
{

public:
  virtual jint getLineNumber() = 0;
  virtual jint getColumnNumber() = 0;
  virtual jint getCharacterOffset() = 0;
  virtual ::java::lang::String * getPublicId() = 0;
  virtual ::java::lang::String * getSystemId() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_xml_stream_Location__
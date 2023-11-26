#include "fractallabelers/fractalmarkerset.h"
#include <iostream>
#include <fstream>

namespace aruco
{

FractalMarkerSet FractalMarkerSet::load(std::string info)
{
  if (isPredefinedConfigurationString(info))
    return loadPredefined(info);
  else
    return readFromFile(info);
}

FractalMarkerSet FractalMarkerSet::loadPredefined(std::string type)
{
  return loadPredefined(getTypeFromString(type));
}

FractalMarkerSet FractalMarkerSet::loadPredefined(CONF_TYPES type)
{
  FractalMarkerSet fms;

  switch (type)
  {
    case FRACTAL_2L_6:
    {
      unsigned char _conf_2L_6[] = {
        0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00,
        0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80,
        0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0xbf,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0xbf, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01,
        0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x24, 0x00,
        0x00, 0x00, 0xab, 0xaa, 0xaa, 0xbe, 0xab, 0xaa, 0xaa, 0x3e, 0x00, 0x00, 0x00,
        0x00, 0xab, 0xaa, 0xaa, 0x3e, 0xab, 0xaa, 0xaa, 0x3e, 0x00, 0x00, 0x00, 0x00,
        0xab, 0xaa, 0xaa, 0x3e, 0xab, 0xaa, 0xaa, 0xbe, 0x00, 0x00, 0x00, 0x00, 0xab,
        0xaa, 0xaa, 0xbe, 0xab, 0xaa, 0xaa, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
        0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01,
        0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00
      };
      unsigned int _conf_2L_6_len = 272;

      std::stringstream stream;
      stream.write((char *)_conf_2L_6, sizeof(unsigned char) * _conf_2L_6_len);
      _fromStream(fms, stream);
    }
    break;
    case FRACTAL_3L_6:
    {
      unsigned char _conf_3L_6[] = {
        0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00,
        0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80,
        0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0xbf,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0xbf, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00,
        0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00,
        0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
        0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00,
        0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01,
        0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01,
        0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01,
        0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0xb7, 0x6d, 0xdb, 0xbe, 0xb7, 0x6d,
        0xdb, 0x3e, 0x00, 0x00, 0x00, 0x00, 0xb7, 0x6d, 0xdb, 0x3e, 0xb7, 0x6d, 0xdb,
        0x3e, 0x00, 0x00, 0x00, 0x00, 0xb7, 0x6d, 0xdb, 0x3e, 0xb7, 0x6d, 0xdb, 0xbe,
        0x00, 0x00, 0x00, 0x00, 0xb7, 0x6d, 0xdb, 0xbe, 0xb7, 0x6d, 0xdb, 0xbe, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00,
        0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
        0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01,
        0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x24, 0x00,
        0x00, 0x00, 0x25, 0x49, 0x12, 0xbe, 0x25, 0x49, 0x12, 0x3e, 0x00, 0x00, 0x00,
        0x00, 0x25, 0x49, 0x12, 0x3e, 0x25, 0x49, 0x12, 0x3e, 0x00, 0x00, 0x00, 0x00,
        0x25, 0x49, 0x12, 0x3e, 0x25, 0x49, 0x12, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x25,
        0x49, 0x12, 0xbe, 0x25, 0x49, 0x12, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01,
        0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
      };
      unsigned int _conf_3L_6_len = 480;

      std::stringstream stream;
      stream.write((char *)_conf_3L_6, sizeof(unsigned char) * _conf_3L_6_len);
      _fromStream(fms, stream);
    }
    break;
    case FRACTAL_4L_6:
    {
      unsigned char _conf_4L_6[] = {
        0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00,
        0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80,
        0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0xbf,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0xbf, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00,
        0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
        0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01,
        0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0xef, 0xee, 0xee, 0xbe, 0xef, 0xee, 0xee,
        0x3e, 0x00, 0x00, 0x00, 0x00, 0xef, 0xee, 0xee, 0x3e, 0xef, 0xee, 0xee, 0x3e,
        0x00, 0x00, 0x00, 0x00, 0xef, 0xee, 0xee, 0x3e, 0xef, 0xee, 0xee, 0xbe, 0x00,
        0x00, 0x00, 0x00, 0xef, 0xee, 0xee, 0xbe, 0xef, 0xee, 0xee, 0xbe, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01,
        0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01,
        0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01,
        0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
        0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0xbe, 0xcd, 0xcc, 0x4c,
        0x3e, 0x00, 0x00, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3e, 0xcd, 0xcc, 0x4c, 0x3e,
        0x00, 0x00, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3e, 0xcd, 0xcc, 0x4c, 0xbe, 0x00,
        0x00, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0xbe, 0xcd, 0xcc, 0x4c, 0xbe, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x01,
        0x01, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01,
        0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00,
        0x00, 0x89, 0x88, 0x88, 0xbd, 0x89, 0x88, 0x88, 0x3d, 0x00, 0x00, 0x00, 0x00,
        0x89, 0x88, 0x88, 0x3d, 0x89, 0x88, 0x88, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x89,
        0x88, 0x88, 0x3d, 0x89, 0x88, 0x88, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x89, 0x88,
        0x88, 0xbd, 0x89, 0x88, 0x88, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
        0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01,
        0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
      };
      unsigned int _conf_4L_6_len = 713;

      std::stringstream stream;
      stream.write((char *)_conf_4L_6, sizeof(unsigned char) * _conf_4L_6_len);
      _fromStream(fms, stream);
    }
    break;
    case FRACTAL_5L_6:
    {
      unsigned char _conf_5L_6[] = {
        0x02, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00,
        0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80,
        0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0xbf,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0xbf, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00,
        0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00,
        0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
        0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01,
        0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 0x4f, 0xec, 0xc4,
        0xbe, 0x4f, 0xec, 0xc4, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x4f, 0xec, 0xc4, 0x3e,
        0x4f, 0xec, 0xc4, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x4f, 0xec, 0xc4, 0x3e, 0x4f,
        0xec, 0xc4, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x4f, 0xec, 0xc4, 0xbe, 0x4f, 0xec,
        0xc4, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00,
        0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01,
        0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00,
        0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01,
        0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
        0x00, 0x02, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x7d, 0xcb, 0x37, 0xbe,
        0x7d, 0xcb, 0x37, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x7d, 0xcb, 0x37, 0x3e, 0x7d,
        0xcb, 0x37, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x7d, 0xcb, 0x37, 0x3e, 0x7d, 0xcb,
        0x37, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x7d, 0xcb, 0x37, 0xbe, 0x7d, 0xcb, 0x37,
        0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
        0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01,
        0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01,
        0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00,
        0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
        0x00, 0x03, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0xd9, 0x89, 0x9d, 0xbd,
        0xd9, 0x89, 0x9d, 0x3d, 0x00, 0x00, 0x00, 0x00, 0xd9, 0x89, 0x9d, 0x3d, 0xd9,
        0x89, 0x9d, 0x3d, 0x00, 0x00, 0x00, 0x00, 0xd9, 0x89, 0x9d, 0x3d, 0xd9, 0x89,
        0x9d, 0xbd, 0x00, 0x00, 0x00, 0x00, 0xd9, 0x89, 0x9d, 0xbd, 0xd9, 0x89, 0x9d,
        0xbd, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x01,
        0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
        0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00,
        0x01, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
        0x24, 0x00, 0x00, 0x00, 0x21, 0x0d, 0xd2, 0xbc, 0x21, 0x0d, 0xd2, 0x3c, 0x00,
        0x00, 0x00, 0x00, 0x21, 0x0d, 0xd2, 0x3c, 0x21, 0x0d, 0xd2, 0x3c, 0x00, 0x00,
        0x00, 0x00, 0x21, 0x0d, 0xd2, 0x3c, 0x21, 0x0d, 0xd2, 0xbc, 0x00, 0x00, 0x00,
        0x00, 0x21, 0x0d, 0xd2, 0xbc, 0x21, 0x0d, 0xd2, 0xbc, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01,
        0x01, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00,
        0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00
      };
      unsigned int _conf_5L_6_len = 898;

      std::stringstream stream;
      stream.write((char *)_conf_5L_6, sizeof(unsigned char) * _conf_5L_6_len);
      _fromStream(fms, stream);
    }
    break;
    case CUSTOM:
      throw cv::Exception(-1, "CUSTOM type is only set by loading from file",
                          "FractalMarkerSet::loadPredefined", "fractalmarkerset.h", -1);
      break;

    default:
      throw cv::Exception(9001, "Invalid Dictionary type requested",
                          "Dictionary::loadPredefined", __FILE__, __LINE__);
  }
  return fms;
}

bool FractalMarkerSet::isPredefinedConfigurationString(std::string str)
{
  return getTypeFromString(str) != CUSTOM;
}

std::string FractalMarkerSet::getTypeString(CONF_TYPES t)
{
  switch (t)
  {
    case FRACTAL_2L_6:
      return "FRACTAL_2L_6";
    case FRACTAL_3L_6:
      return "FRACTAL_3L_6";
    case FRACTAL_4L_6:
      return "FRACTAL_4L_6";
    case FRACTAL_5L_6:
      return "FRACTAL_5L_6";
    case CUSTOM:
      return "CUSTOM";
  };
  return "Non valid CONF_TYPE";
}

FractalMarkerSet::CONF_TYPES FractalMarkerSet::getTypeFromString(std::string str)
{
  if (str == "FRACTAL_2L_6")
    return FRACTAL_2L_6;
  if (str == "FRACTAL_3L_6")
    return FRACTAL_3L_6;
  if (str == "FRACTAL_4L_6")
    return FRACTAL_4L_6;
  if (str == "FRACTAL_5L_6")
    return FRACTAL_5L_6;
  else
    return CUSTOM;
}

std::vector<std::string> FractalMarkerSet::getConfigurations()
{
  return { "FRACTAL_2L_6", "FRACTAL_3L_6", "FRACTAL_4L_6", "FRACTAL_5L_6" };
}

void FractalMarkerSet::_toStream(FractalMarkerSet &configuration, std::ostream &str)
{
  str.write((char *)&configuration.mInfoType, sizeof(mInfoType));
  str.write((char *)&configuration._nmarkers, sizeof(_nmarkers));
  str.write((char *)&configuration._idExternal, sizeof(_idExternal));

  for (auto fractal : configuration.fractalMarkerCollection)
  {
    // ID
    int id = fractal.first;
    str.write((char *)&id, sizeof(id));
    // NBITS
    int nbits = fractal.second.nBits();
    str.write((char *)&nbits, sizeof(nbits));
    // CORNERS
    std::vector<cv::Point3f> corners = fractal.second.points;
    str.write((char *)&corners[0], sizeof(cv::Point3f) * 4);
    // MAT
    cv::Mat mat = fractal.second.mat();
    str.write((char *)mat.data, mat.elemSize() * mat.total());
    // SUBMARKERS
    std::vector<int> sub = fractal.second.subMarkers();
    int nsub = sub.size();
    str.write((char *)&nsub, sizeof(nsub));
    str.write((char *)&sub[0], sizeof(int) * nsub);
  }
}

void FractalMarkerSet::_fromStream(FractalMarkerSet &configuration, std::istream &str)
{
  str.read((char *)&configuration.mInfoType, sizeof(mInfoType));
  str.read((char *)&configuration._nmarkers, sizeof(_nmarkers));
  str.read((char *)&configuration._idExternal, sizeof(_idExternal));

  for (int i = 0; i < configuration._nmarkers; i++)
  {
    // ID
    int id;
    str.read((char *)&id, sizeof(id));
    // NBITS
    int nbits;
    str.read((char *)&nbits, sizeof(nbits));

    // CORNERS
    std::vector<cv::Point3f> corners(4);
    str.read((char *)&corners[0], sizeof(cv::Point3f) * 4);
    // MAT
    cv::Mat mat;
    mat.create(sqrt(nbits), sqrt(nbits), CV_8UC1);
    str.read((char *)mat.data, mat.elemSize() * mat.total());
    // SUBMARKERS
    int nsub;
    str.read((char *)&nsub, sizeof(nsub));
    std::vector<int> id_submarkers(nsub);
    if (nsub > 0)
      str.read((char *)&id_submarkers[0], sizeof(int) * nsub);

    FractalMarker fractalMarker = FractalMarker(id, mat, corners, id_submarkers);
    configuration.nbits_fractalMarkerIDs[mat.total()].push_back(fractalMarker.id);
    configuration.fractalMarkerCollection[fractalMarker.id] = fractalMarker;
  }

  // Add subfractals
  for (auto &id_marker : configuration.fractalMarkerCollection)
  {
    FractalMarker &marker = id_marker.second;
    for (auto id : id_marker.second.subMarkers())
      marker.addSubFractalMarker(configuration.fractalMarkerCollection[id]);
  }
}

void FractalMarkerSet::create(std::vector<std::pair<int, int>> regionsConfig, float pixSize)
{
  if (pixSize == -1)
  {
    mInfoType = NORM;
    pixSize = 1;
  }
  else
    mInfoType = PIX;

  _nmarkers = regionsConfig.size();
  _idExternal = 0;

  std::vector<int> submarkers;
  submarkers.clear();
  float pix = 0;
  for (int n = regionsConfig.size() - 1; n >= 0; n--)
  {
    int nVal = regionsConfig[n].first;
    int kVal = regionsConfig[n].second;

    cv::Mat mat = configureMat(nVal, kVal);

    pix = (nVal + 2) * pixSize;
    std::vector<cv::Point3f> corners = { cv::Point3f(-pix / 2, pix / 2, 0.),
                                         cv::Point3f(pix / 2, pix / 2, 0.),
                                         cv::Point3f(pix / 2, -pix / 2, 0.),
                                         cv::Point3f(-pix / 2, -pix / 2, 0.) };

    FractalMarker fractal = FractalMarker(n, mat, corners, submarkers);
    fractalMarkerCollection[n] = fractal;
    submarkers.clear();
    submarkers.push_back(n);


    float kValSup = regionsConfig[n - 1].second - 2;
    float newP = (nVal + 2) / (kValSup);
    pixSize = newP * pixSize;
  }

  // Normalize corners. Fractal marker: (-1,1,0)(1,1,0)(1,-1,0)(-1,-1,0)
  if (isNormalize())
  {
    for (auto &m : fractalMarkerCollection)
    {
      for (auto &c : m.second.points)
      {
        c.x /= pix / 2;
        c.y /= pix / 2;
      }
    }
  }
}

cv::Mat FractalMarkerSet::configureMat(int nVal, int kVal, int maxIter)
{
  // Pixels to configure (n-k region)
  std::vector<cv::Point2i> pixels;
  for (int y = 0; y < nVal; y++)
  {
    for (int x = 0; x < nVal; x++)
    {
      if ((x <= ((nVal - kVal) / 2) - 1 || x >= kVal + (nVal - kVal) / 2) ||
          (y <= ((nVal - kVal) / 2) - 1 || y >= kVal + (nVal - kVal) / 2))
      {
        pixels.push_back(cv::Point2i(x, y));
      }
    }
  }

  int dst_mkr = 0;
  int dst_set = 0;

  cv::Mat m;
  int markerIters = 0;
  do
  {
    std::vector<cv::Point2i> conf_pixels = pixels;
    m = cv::Mat::ones(nVal, nVal, CV_8UC1);

    //        struct timespec ts;
    //        clock_gettime(CLOCK_MONOTONIC, &ts);
    //        srand((time_t)ts.tv_nsec);

    // Random delete half of pixels
    int npix = conf_pixels.size() / 2;
    for (int i = 0; i < npix; i++)
    {
      int idxSelected = rand() % conf_pixels.size();
      conf_pixels.erase(conf_pixels.begin() + idxSelected);
    }

    // Put the new configuration (0 selected pixels)
    for (auto p : conf_pixels)
      m.at<char>(p.y, p.x) = 0;

    // Check marker distance to itself
    int new_dst_mkr = dstMarker(m);
    if (new_dst_mkr > dst_mkr)
    {
      // Check marker distance to set
      int new_dst_set = dstMarkerToFractalDict(m);
      if (new_dst_set > dst_set)
      {
        dst_mkr = new_dst_mkr;
        dst_set = new_dst_set;
      }
    }
  } while (markerIters++ < maxIter);

  for (int y = ((nVal - kVal) / 2) + 1; y < kVal + (nVal - kVal) / 2 - 1; y++)
  {
    for (int x = ((nVal - kVal) / 2) + 1; x < kVal + (nVal - kVal) / 2 - 1; x++)
    {
      m.at<char>(y, x) = 0;
    }
  }

  return m;
}

/*
 *  Calculate minimum distance between marker 'm' and the 4 rotations of each word in the dictionary
 */
int FractalMarkerSet::dstMarkerToFractalDict(cv::Mat m)
{
  int HDist = m.cols * m.rows;  // distancia maxima
  int HDistTemp;

  for (auto marker : fractalMarkerCollection)
  {
    if (marker.second.nBits() == m.total())
    {
      HDistTemp = dstMarkerToMarker(marker.second.mat(), m);

      if (HDistTemp == 0)
        return 0;
      else if (HDistTemp < HDist)
        HDist = HDistTemp;
    }
  }
  return HDist;
}

/*
 *  Calculate minimum distance between marker1 'm' and the 4 rotations of marker2 'm2'
 */
auto rotate = [](const cv::Mat &m)
{
  cv::Mat out;
  m.copyTo(out);
  for (int i = 0; i < m.rows; i++)
  {
    for (int j = 0; j < m.cols; j++)
    {
      out.at<char>(i, j) = m.at<char>(m.cols - j - 1, i);
    }
  }
  return out;
};

int FractalMarkerSet::dstMarker(const cv::Mat m)
{
  int HDist = m.cols * m.rows;  // maximum distance
  int HDistTemp;

  cv::Mat rot;
  m.copyTo(rot);


  for (int i = 0; i < 3; i++)
  {
    cv::Mat diff;
    rot = rotate(rot);
    cv::compare(rot, m, diff, cv::CMP_NE);
    HDistTemp = cv::countNonZero(diff);
    if (HDistTemp < HDist)
      HDist = HDistTemp;
  }
  return HDist;
}

int FractalMarkerSet::dstMarkerToMarker(const cv::Mat m1, const cv::Mat m2)
{
  int HDist = m2.cols * m2.rows;  // maximum distance
  int HDistTemp;

  for (int i = 0; i < 4; i++)
  {
    cv::Mat diff;
    cv::compare(rotate(m2), m1, diff, cv::CMP_NE);
    HDistTemp = cv::countNonZero(diff);
    if (HDistTemp < HDist)
      HDist = HDistTemp;
  }

  return HDist;
}


FractalMarkerSet FractalMarkerSet::readFromFile(std::string path)
{
  cv::FileStorage fs;
  try
  {
    fs.open(path, cv::FileStorage::READ);
  }
  catch (std::exception &ex)
  {
    throw cv::Exception(81818, "FractalMarkerSet::readFromFile",
                        ex.what() + std::string(" file=)") + path, __FILE__, __LINE__);
  }

  FractalMarkerSet configuration;

  fs["mInfoType"] >> configuration.mInfoType;
  fs["fractal_levels"] >> configuration._nmarkers;
  fs["fractal_external_id"] >> configuration._idExternal;

  cv::FileNode markers = fs["markers"];
  int i = 0;
  for (cv::FileNodeIterator it = markers.begin(); it != markers.end(); ++it, i++)
  {
    int id = (*it)["id"];
    std::vector<int> bits;

    std::vector<cv::Point3f> corners;
    std::vector<int> submarkers_id;

    cv::FileNode bitsMarker = (*it)["bits"];
    for (cv::FileNodeIterator itb = bitsMarker.begin(); itb != bitsMarker.end(); ++itb)
    {
      bits.push_back(*itb);
    }
    cv::Mat m = cv::Mat(sqrt(bits.size()), sqrt(bits.size()), CV_32SC1);
    memcpy(m.data, bits.data(), bits.size() * sizeof(int));

    m.convertTo(m, CV_8UC1);

    cv::FileNode cornersFractal = (*it)["corners"];
    for (cv::FileNodeIterator itp = cornersFractal.begin(); itp != cornersFractal.end(); ++itp)
    {
      std::vector<float> coordinates3d;
      (*itp) >> coordinates3d;
      if (coordinates3d.size() != 3)
        throw cv::Exception(81818, "FractalMarkerSet::readFromFile",
                            "invalid file type 3", __FILE__, __LINE__);
      cv::Point3f point(coordinates3d[0], coordinates3d[1], coordinates3d[2]);
      corners.push_back(point);
    }

    cv::FileNode submarkersID = (*it)["submarkers_id"];
    for (cv::FileNodeIterator itm = submarkersID.begin(); itm != submarkersID.end(); ++itm)
    {
      submarkers_id.push_back((*itm));
    }

    FractalMarker fractalMarker = FractalMarker(id, m, corners, submarkers_id);
    configuration.nbits_fractalMarkerIDs[m.total()].push_back(fractalMarker.id);
    configuration.fractalMarkerCollection[fractalMarker.id] = fractalMarker;
  }

  // Add subfractals
  for (auto &id_marker : configuration.fractalMarkerCollection)
  {
    FractalMarker &marker = id_marker.second;
    for (auto id : id_marker.second.subMarkers())
      marker.addSubFractalMarker(configuration.fractalMarkerCollection[id]);
  }

  return configuration;
}

void FractalMarkerSet::saveToFile(cv::FileStorage &fs)
{
  fs << "codeid"
     << "fractalmarkers";
  fs << "mInfoType" << mInfoType;
  fs << "fractal_levels" << _nmarkers;
  fs << "fractal_external_id" << _idExternal;
  fs << "markers"
     << "[";
  for (auto id_marker : fractalMarkerCollection)
  {
    FractalMarker marker = id_marker.second;

    fs << "{:"
       << "id" << (int)id_marker.first;

    fs << "bits"
       << "[:";
    cv::Mat m = marker.mat();
    for (int y = 0; y < m.cols; y++)
      for (int x = 0; x < m.rows; x++)
        if (m.at<char>(y, x) == 2)
          fs << 0;
        else
          fs << m.at<char>(y, x);
    fs << "]";

    fs << "corners"
       << "[:";
    for (auto corner : marker.points)
      fs << corner;
    fs << "]";

    fs << "submarkers_id"
       << "[:";
    for (auto idsub : marker.subMarkers())
      fs << (int)idsub;
    fs << "]";

    fs << "}";
  }
  fs << "]";
}

bool FractalMarkerSet::isFractalMarker(cv::Mat &m, int nbits, int &markerid)
{
  bool found = false;

  for (auto id : nbits_fractalMarkerIDs[nbits])
  {
    FractalMarker fm = fractalMarkerCollection[id];

    // Apply mask to substract submarkers
    cv::Mat m2;
    m.copyTo(m2, fm.mask());

    // Code without submarkers == fractal marker?
    if (cv::countNonZero(m2 != fm.mat()) == 0)
    {
      found = true;

      // Change new code!!
      //////////////
      markerid = fm.id;
      /////////////

      break;
    }
  }

  return found;
}

FractalMarkerSet FractalMarkerSet::convertToMeters(float fractalSizeM)
{
  if (!(isExpressedInPixels() || isNormalize()))
    throw cv::Exception(-1, "The FractalMarkers are not expressed in pixels",
                        "FractalMarkerSet::convertToMeters", __FILE__, __LINE__);

  FractalMarkerSet BInfo(*this);
  BInfo.mInfoType = FractalMarkerSet::METERS;

  // now, get the size of a pixel, and change scale
  float pixSizeM = fractalSizeM / float(BInfo.getFractalSize());

  for (size_t i = 0; i < BInfo.fractalMarkerCollection.size(); i++)
  {
    // Convert to meters the position fractal marker
    for (int c = 0; c < 4; c++)
    {
      BInfo.fractalMarkerCollection[i][c] *= pixSizeM;
    }
  }
  return BInfo;
}

FractalMarkerSet FractalMarkerSet::normalize()
{
  if (!(isExpressedInPixels() || isExpressedInMeters()))
    throw cv::Exception(-1, "The FractalMarkers are not expressed in pixels or meters",
                        "FractalMarkerSet::convertToMeters", __FILE__, __LINE__);

  FractalMarkerSet BInfo(*this);
  BInfo.mInfoType = FractalMarkerSet::NORM;

  float currentHalfSize = BInfo.getFractalSize() / 2.f;

  for (size_t i = 0; i < BInfo.fractalMarkerCollection.size(); i++)
  {
    // Normalize the position fractal marker
    for (size_t c = 0; c < 4; c++)
    {
      BInfo.fractalMarkerCollection[i][c] /= currentHalfSize;
    }
  }

  return BInfo;
}

std::map<int, std::vector<cv::Point3f>> FractalMarkerSet::getInnerCorners()
{
  std::map<int, std::vector<cv::Point3f>> id_innerCorners;

  for (auto id_fm : fractalMarkerCollection)
  {
    int id = id_fm.first;
    FractalMarker fm = id_fm.second;

    for (auto ic : fm.getInnerCorners())
      id_innerCorners[id].push_back(ic);  // Conversion
  }
  return id_innerCorners;
}

cv::Mat FractalMarkerSet::getFractalMarkerImage(int pixSize, bool border)
{
  if (fractalMarkerCollection.size() < 1)
    throw cv::Exception(9001, "There is not any fractal marker loaded",
                        "FractalMarkerSet::getFractalMarkerImage", __FILE__, __LINE__);

  // Smallest fractal marker
  FractalMarker innerM = (--fractalMarkerCollection.end())->second;
  float bitSize = innerM.getMarkerSize() / (pixSize * (sqrt(innerM.nBits()) + 2));

  FractalMarker externMarker = fractalMarkerCollection[_idExternal];
  float markerSize = externMarker.getMarkerSize() / bitSize;
  float markerBitSize = markerSize / (sqrt(externMarker.nBits()) + 2);
  cv::Mat img = cv::Mat::zeros(markerSize, markerSize, CV_8U);

  // Asign value pixels
  cv::Mat m = externMarker.mat();

  for (int y = m.cols - 1; y >= 0; y--)
    for (int x = m.cols - 1; x >= 0; x--)
    {
      if (m.at<uchar>(y, x) == 1)
      {
        cv::Range val1 = cv::Range((1 + y) * markerBitSize, (y + 2) * markerBitSize);
        cv::Range val2 = cv::Range((1 + x) * markerBitSize, (x + 2) * markerBitSize);

        cv::Mat bit_pix = img(val1, val2);
        bit_pix.setTo(cv::Scalar::all(255));
      }
    }

  for (auto idSubmarker : externMarker.subMarkers())
  {
    std::vector<int> idds;
    idds.push_back(idSubmarker);
    while (!idds.empty())
    {
      idSubmarker = idds.back();
      idds.pop_back();

      FractalMarker submarker = fractalMarkerCollection[idSubmarker];

      cv::Mat m = submarker.mat();
      cv::Point3f coord = submarker.points[0];

      float markerSize = submarker.getMarkerSize() / bitSize;
      float markerBitSize = markerSize / (sqrt(submarker.nBits()) + 2);

      // Get position inside fractal marker
      float offsetX = fabs(coord.x - externMarker.points[0].x) / bitSize;
      float offsetY = fabs(coord.y - externMarker.points[0].y) / bitSize;

      // Asign value pixels
      for (int y = m.cols - 1; y >= 0; y--)
        for (int x = m.cols - 1; x >= 0; x--)
        {
          if (m.at<uchar>(y, x) == 1)
          {
            cv::Range val1 = cv::Range((1 + y) * markerBitSize + offsetY,
                                       (2 + y) * markerBitSize + offsetY);
            cv::Range val2 = cv::Range((1 + x) * markerBitSize + offsetX,
                                       (2 + x) * markerBitSize + offsetX);

            cv::Mat bit_pix = img(val1, val2);
            bit_pix.setTo(cv::Scalar::all(255));
          }
        }

      // Add submarkers to draw
      for (auto idsm : submarker.subMarkers())
        idds.push_back(idsm);
    }
  }

  if (border)
    copyMakeBorder(img, img, markerBitSize, markerBitSize, markerBitSize, markerBitSize,
                   cv::BORDER_CONSTANT, cv::Scalar::all(255));

  return img;
}
};  // namespace aruco

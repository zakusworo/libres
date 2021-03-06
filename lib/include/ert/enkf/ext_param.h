/*
   Copyright (C) 2017  Statoil ASA, Norway.

   The file 'ext_param_config.h' is part of ERT - Ensemble based Reservoir Tool.

   ERT is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   ERT is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.

   See the GNU General Public License at <http://www.gnu.org/licenses/gpl.html>
   for more details.
*/

#ifndef EXT_PARAM_H
#define EXT_PARAM_H
#ifdef __cplusplus
extern "C" {
#endif
#include <ert/util/type_macros.h>

typedef struct ext_param_struct ext_param_type;

  bool        ext_param_iset( ext_param_type * param, int index , double value);
  double      ext_param_iget(const ext_param_type * param, int index);
  bool        ext_param_key_set( ext_param_type * param, const char * key, double value);
  double      ext_param_key_get( const ext_param_type * param, const char * key );
  int         ext_param_get_size( const ext_param_type * ext_param );
  bool        ext_param_has_key( const ext_param_type * ext_param , const char * key);
  void        ext_param_json_export(const ext_param_type * ext_param, const char * json_file);
  const char* ext_param_iget_key(const ext_param_type * param, int index);

UTIL_SAFE_CAST_HEADER(ext_param);
UTIL_SAFE_CAST_HEADER_CONST(ext_param);
VOID_FREE_HEADER(ext_param);
VOID_ALLOC_HEADER(ext_param);
VOID_ECL_WRITE_HEADER(ext_param);
VOID_WRITE_TO_BUFFER_HEADER(ext_param)
VOID_READ_FROM_BUFFER_HEADER(ext_param)

#ifdef __cplusplus
}
#endif
#endif

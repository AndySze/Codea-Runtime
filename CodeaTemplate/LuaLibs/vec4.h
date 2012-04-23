//
//  vec4.h
//  Codea
//
//  Created by Simeon Nasilowski on 26/09/11.
//  
//  Copyright 2012 Two Lives Left Pty. Ltd.
//  
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//  http://www.apache.org/licenses/LICENSE-2.0
//  
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//  

#ifndef Codea_vec4_h
#define Codea_vec4_h

#include "lua.h"

#define CODIFY_VEC4LIBNAME "vec4"

LUALIB_API int (luaopen_vec4) (lua_State *L);
lua_Number *getvec4(lua_State *L, int i);
lua_Number *checkvec4(lua_State *L, int i);
void pushvec4(lua_State *L, lua_Number x, lua_Number y, lua_Number z, lua_Number w);

#endif

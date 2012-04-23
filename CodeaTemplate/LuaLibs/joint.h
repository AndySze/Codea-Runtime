//
//  joint.h
//  Codea
//
//  Created by John Millard on 10/11/11.
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

#ifndef Codify_joint_h
#define Codify_joint_h

#ifdef __cplusplus
extern "C" {
#endif 
    
#import "LuaState.h"           
#include "lua.h"
#include "lauxlib.h"    
#include "vec2.h"
#include "object_reg.h"
       
#define CODIFY_JOINT_LIBNAME "joint"    
    
LUALIB_API int (luaopen_joint) (lua_State *L);    
    
#ifdef __cplusplus
}
#endif 

struct b2Joint;
typedef struct b2Joint b2Joint;

typedef struct joint_wrapper_type
{    
    b2Joint* joint;
    int bodyRefA;
    int bodyRefB;
} joint_wrapper_type;

#endif

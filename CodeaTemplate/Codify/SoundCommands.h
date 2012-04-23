//
//  SoundCommands.h
//  Codea
//
//  Created by Dylan Sale on 29/09/11.
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

struct lua_State;

@class LuaState;

#ifdef __cplusplus
extern "C" {
#endif 
    
    void setupSoundGlobals(LuaState *state);
        
    int sound(struct lua_State*);
    int soundBufferSize(struct lua_State*);

    void updateAudio(); //Copy data into playing audio buffer. This needs to be rewritten.
    
    
#ifdef __cplusplus
}
#endif 

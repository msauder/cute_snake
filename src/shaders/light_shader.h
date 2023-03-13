#pragma once
/*
    #version:1# (machine generated, don't edit!)

    Generated by sokol-shdc (https://github.com/floooh/sokol-tools)

    Cmdline: sokol-shdc --input light.glsl --output light_shader.h --slang glsl330:hlsl5:metal_macos:glsl300es:glsl100 --reflection

    Overview:

        Shader program 'shd':
            Get shader desc: light_shd_shader_desc(sg_query_backend());
            Vertex shader: vs
                Attribute slots:
                    ATTR_light_vs_in_pos = 0
            Fragment shader: fs
                Uniform block 'fs_params':
                    C struct: light_fs_params_t
                    Bind slot: SLOT_light_fs_params = 0


    Shader descriptor structs:

        sg_shader shd = sg_make_shader(light_shd_shader_desc(sg_query_backend()));

    Vertex attribute locations for vertex shader 'vs':

        sg_pipeline pip = sg_make_pipeline(&(sg_pipeline_desc){
            .layout = {
                .attrs = {
                    [ATTR_light_vs_in_pos] = { ... },
                },
            },
            ...});

    Image bind slots, use as index in sg_bindings.vs_images[] or .fs_images[]


    Bind slot and C-struct for uniform block 'fs_params':

        light_fs_params_t fs_params = {
            .u_color = ...;
        };
        sg_apply_uniforms(SG_SHADERSTAGE_[VS|FS], SLOT_light_fs_params, &SG_RANGE(fs_params));

*/
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>
#if !defined(SOKOL_SHDC_ALIGN)
  #if defined(_MSC_VER)
    #define SOKOL_SHDC_ALIGN(a) __declspec(align(a))
  #else
    #define SOKOL_SHDC_ALIGN(a) __attribute__((aligned(a)))
  #endif
#endif
#define ATTR_light_vs_in_pos (0)
#define SLOT_light_fs_params (0)
#pragma pack(push,1)
SOKOL_SHDC_ALIGN(16) typedef struct light_fs_params_t {
    Color u_color;
} light_fs_params_t;
#pragma pack(pop)
/*
    #version 330
    
    layout(location = 0) in vec2 in_pos;
    
    void main()
    {
        gl_Position = vec4(in_pos, 0.0, 1.0);
        gl_Position.y = -gl_Position.y;
    }
    
*/
static const char light_vs_source_glsl330[148] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x33,0x30,0x0a,0x0a,0x6c,0x61,
    0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,
    0x30,0x29,0x20,0x69,0x6e,0x20,0x76,0x65,0x63,0x32,0x20,0x69,0x6e,0x5f,0x70,0x6f,
    0x73,0x3b,0x0a,0x0a,0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,
    0x7b,0x0a,0x20,0x20,0x20,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,
    0x6e,0x20,0x3d,0x20,0x76,0x65,0x63,0x34,0x28,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x2c,
    0x20,0x30,0x2e,0x30,0x2c,0x20,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,
    0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x2e,0x79,0x20,0x3d,0x20,
    0x2d,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x2e,0x79,0x3b,0x0a,
    0x7d,0x0a,0x0a,0x00,
};
/*
    #version 330
    
    uniform vec4 fs_params[1];
    layout(location = 0) out vec4 result;
    
    void main()
    {
        result = fs_params[0];
    }
    
*/
static const char light_fs_source_glsl330[125] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x33,0x30,0x0a,0x0a,0x75,0x6e,
    0x69,0x66,0x6f,0x72,0x6d,0x20,0x76,0x65,0x63,0x34,0x20,0x66,0x73,0x5f,0x70,0x61,
    0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,
    0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x30,0x29,0x20,0x6f,0x75,
    0x74,0x20,0x76,0x65,0x63,0x34,0x20,0x72,0x65,0x73,0x75,0x6c,0x74,0x3b,0x0a,0x0a,
    0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,
    0x20,0x20,0x72,0x65,0x73,0x75,0x6c,0x74,0x20,0x3d,0x20,0x66,0x73,0x5f,0x70,0x61,
    0x72,0x61,0x6d,0x73,0x5b,0x30,0x5d,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    #version 100
    
    attribute vec2 in_pos;
    
    void main()
    {
        gl_Position = vec4(in_pos, 0.0, 1.0);
        gl_Position.y = -gl_Position.y;
    }
    
*/
static const char light_vs_source_glsl100[134] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x31,0x30,0x30,0x0a,0x0a,0x61,0x74,
    0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x20,0x76,0x65,0x63,0x32,0x20,0x69,0x6e,0x5f,
    0x70,0x6f,0x73,0x3b,0x0a,0x0a,0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,
    0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,
    0x69,0x6f,0x6e,0x20,0x3d,0x20,0x76,0x65,0x63,0x34,0x28,0x69,0x6e,0x5f,0x70,0x6f,
    0x73,0x2c,0x20,0x30,0x2e,0x30,0x2c,0x20,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x20,0x20,
    0x20,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x2e,0x79,0x20,
    0x3d,0x20,0x2d,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x2e,0x79,
    0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    #version 100
    precision mediump float;
    precision highp int;
    
    uniform highp vec4 fs_params[1];
    void main()
    {
        gl_FragData[0] = fs_params[0];
    }
    
*/
static const char light_fs_source_glsl100[146] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x31,0x30,0x30,0x0a,0x70,0x72,0x65,
    0x63,0x69,0x73,0x69,0x6f,0x6e,0x20,0x6d,0x65,0x64,0x69,0x75,0x6d,0x70,0x20,0x66,
    0x6c,0x6f,0x61,0x74,0x3b,0x0a,0x70,0x72,0x65,0x63,0x69,0x73,0x69,0x6f,0x6e,0x20,
    0x68,0x69,0x67,0x68,0x70,0x20,0x69,0x6e,0x74,0x3b,0x0a,0x0a,0x75,0x6e,0x69,0x66,
    0x6f,0x72,0x6d,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x76,0x65,0x63,0x34,0x20,0x66,
    0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x3b,0x0a,0x76,0x6f,0x69,
    0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x67,
    0x6c,0x5f,0x46,0x72,0x61,0x67,0x44,0x61,0x74,0x61,0x5b,0x30,0x5d,0x20,0x3d,0x20,
    0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x30,0x5d,0x3b,0x0a,0x7d,0x0a,
    0x0a,0x00,
};
/*
    #version 300 es
    
    layout(location = 0) in vec2 in_pos;
    
    void main()
    {
        gl_Position = vec4(in_pos, 0.0, 1.0);
        gl_Position.y = -gl_Position.y;
    }
    
*/
static const char light_vs_source_glsl300es[151] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x30,0x30,0x20,0x65,0x73,0x0a,
    0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,
    0x20,0x3d,0x20,0x30,0x29,0x20,0x69,0x6e,0x20,0x76,0x65,0x63,0x32,0x20,0x69,0x6e,
    0x5f,0x70,0x6f,0x73,0x3b,0x0a,0x0a,0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,
    0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,
    0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x76,0x65,0x63,0x34,0x28,0x69,0x6e,0x5f,0x70,
    0x6f,0x73,0x2c,0x20,0x30,0x2e,0x30,0x2c,0x20,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x20,
    0x20,0x20,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x2e,0x79,
    0x20,0x3d,0x20,0x2d,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x2e,
    0x79,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    #version 300 es
    precision mediump float;
    precision highp int;
    
    uniform highp vec4 fs_params[1];
    layout(location = 0) out highp vec4 result;
    
    void main()
    {
        result = fs_params[0];
    }
    
*/
static const char light_fs_source_glsl300es[186] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x30,0x30,0x20,0x65,0x73,0x0a,
    0x70,0x72,0x65,0x63,0x69,0x73,0x69,0x6f,0x6e,0x20,0x6d,0x65,0x64,0x69,0x75,0x6d,
    0x70,0x20,0x66,0x6c,0x6f,0x61,0x74,0x3b,0x0a,0x70,0x72,0x65,0x63,0x69,0x73,0x69,
    0x6f,0x6e,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x69,0x6e,0x74,0x3b,0x0a,0x0a,0x75,
    0x6e,0x69,0x66,0x6f,0x72,0x6d,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x76,0x65,0x63,
    0x34,0x20,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x3b,0x0a,
    0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,
    0x3d,0x20,0x30,0x29,0x20,0x6f,0x75,0x74,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x76,
    0x65,0x63,0x34,0x20,0x72,0x65,0x73,0x75,0x6c,0x74,0x3b,0x0a,0x0a,0x76,0x6f,0x69,
    0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x72,
    0x65,0x73,0x75,0x6c,0x74,0x20,0x3d,0x20,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,
    0x73,0x5b,0x30,0x5d,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    static float4 gl_Position;
    static float2 in_pos;
    
    struct SPIRV_Cross_Input
    {
        float2 in_pos : TEXCOORD0;
    };
    
    struct SPIRV_Cross_Output
    {
        float4 gl_Position : SV_Position;
    };
    
    #line 10 "light.glsl"
    void vert_main()
    {
    #line 10 "light.glsl"
    #line 11 "light.glsl"
        gl_Position = float4(in_pos, 0.0f, 1.0f);
    }
    
    SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
    {
        in_pos = stage_input.in_pos;
        vert_main();
        SPIRV_Cross_Output stage_output;
        stage_output.gl_Position = gl_Position;
        return stage_output;
    }
*/
static const char light_vs_source_hlsl5[532] = {
    0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x20,0x67,0x6c,
    0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x3b,0x0a,0x73,0x74,0x61,0x74,0x69,
    0x63,0x20,0x66,0x6c,0x6f,0x61,0x74,0x32,0x20,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x3b,
    0x0a,0x0a,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x53,0x50,0x49,0x52,0x56,0x5f,0x43,
    0x72,0x6f,0x73,0x73,0x5f,0x49,0x6e,0x70,0x75,0x74,0x0a,0x7b,0x0a,0x20,0x20,0x20,
    0x20,0x66,0x6c,0x6f,0x61,0x74,0x32,0x20,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x20,0x3a,
    0x20,0x54,0x45,0x58,0x43,0x4f,0x4f,0x52,0x44,0x30,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,
    0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x53,0x50,0x49,0x52,0x56,0x5f,0x43,0x72,0x6f,
    0x73,0x73,0x5f,0x4f,0x75,0x74,0x70,0x75,0x74,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,
    0x66,0x6c,0x6f,0x61,0x74,0x34,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,
    0x6f,0x6e,0x20,0x3a,0x20,0x53,0x56,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,
    0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x31,0x30,0x20,0x22,
    0x6c,0x69,0x67,0x68,0x74,0x2e,0x67,0x6c,0x73,0x6c,0x22,0x0a,0x76,0x6f,0x69,0x64,
    0x20,0x76,0x65,0x72,0x74,0x5f,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x23,
    0x6c,0x69,0x6e,0x65,0x20,0x31,0x30,0x20,0x22,0x6c,0x69,0x67,0x68,0x74,0x2e,0x67,
    0x6c,0x73,0x6c,0x22,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x31,0x31,0x20,0x22,0x6c,
    0x69,0x67,0x68,0x74,0x2e,0x67,0x6c,0x73,0x6c,0x22,0x0a,0x20,0x20,0x20,0x20,0x67,
    0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x66,0x6c,0x6f,
    0x61,0x74,0x34,0x28,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x2c,0x20,0x30,0x2e,0x30,0x66,
    0x2c,0x20,0x31,0x2e,0x30,0x66,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x53,0x50,0x49,0x52,
    0x56,0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,0x4f,0x75,0x74,0x70,0x75,0x74,0x20,0x6d,
    0x61,0x69,0x6e,0x28,0x53,0x50,0x49,0x52,0x56,0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,
    0x49,0x6e,0x70,0x75,0x74,0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x69,0x6e,0x70,0x75,
    0x74,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x20,
    0x3d,0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x69,0x6e,0x70,0x75,0x74,0x2e,0x69,0x6e,
    0x5f,0x70,0x6f,0x73,0x3b,0x0a,0x20,0x20,0x20,0x20,0x76,0x65,0x72,0x74,0x5f,0x6d,
    0x61,0x69,0x6e,0x28,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x53,0x50,0x49,0x52,0x56,
    0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,0x4f,0x75,0x74,0x70,0x75,0x74,0x20,0x73,0x74,
    0x61,0x67,0x65,0x5f,0x6f,0x75,0x74,0x70,0x75,0x74,0x3b,0x0a,0x20,0x20,0x20,0x20,
    0x73,0x74,0x61,0x67,0x65,0x5f,0x6f,0x75,0x74,0x70,0x75,0x74,0x2e,0x67,0x6c,0x5f,
    0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x67,0x6c,0x5f,0x50,0x6f,
    0x73,0x69,0x74,0x69,0x6f,0x6e,0x3b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,
    0x72,0x6e,0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x6f,0x75,0x74,0x70,0x75,0x74,0x3b,
    0x0a,0x7d,0x0a,0x00,
};
/*
    cbuffer fs_params : register(b0)
    {
        float4 _14_u_color : packoffset(c0);
    };
    
    
    static float4 result;
    
    struct SPIRV_Cross_Output
    {
        float4 result : SV_Target0;
    };
    
    #line 14 "light.glsl"
    void frag_main()
    {
    #line 14 "light.glsl"
    #line 15 "light.glsl"
        result = _14_u_color;
    }
    
    SPIRV_Cross_Output main()
    {
        frag_main();
        SPIRV_Cross_Output stage_output;
        stage_output.result = result;
        return stage_output;
    }
*/
static const char light_fs_source_hlsl5[426] = {
    0x63,0x62,0x75,0x66,0x66,0x65,0x72,0x20,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,
    0x73,0x20,0x3a,0x20,0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x28,0x62,0x30,0x29,
    0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x20,0x5f,0x31,
    0x34,0x5f,0x75,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x20,0x3a,0x20,0x70,0x61,0x63,0x6b,
    0x6f,0x66,0x66,0x73,0x65,0x74,0x28,0x63,0x30,0x29,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,
    0x0a,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x20,0x72,
    0x65,0x73,0x75,0x6c,0x74,0x3b,0x0a,0x0a,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x53,
    0x50,0x49,0x52,0x56,0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,0x4f,0x75,0x74,0x70,0x75,
    0x74,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x20,0x72,
    0x65,0x73,0x75,0x6c,0x74,0x20,0x3a,0x20,0x53,0x56,0x5f,0x54,0x61,0x72,0x67,0x65,
    0x74,0x30,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x31,0x34,
    0x20,0x22,0x6c,0x69,0x67,0x68,0x74,0x2e,0x67,0x6c,0x73,0x6c,0x22,0x0a,0x76,0x6f,
    0x69,0x64,0x20,0x66,0x72,0x61,0x67,0x5f,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,
    0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x31,0x34,0x20,0x22,0x6c,0x69,0x67,0x68,0x74,
    0x2e,0x67,0x6c,0x73,0x6c,0x22,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x31,0x35,0x20,
    0x22,0x6c,0x69,0x67,0x68,0x74,0x2e,0x67,0x6c,0x73,0x6c,0x22,0x0a,0x20,0x20,0x20,
    0x20,0x72,0x65,0x73,0x75,0x6c,0x74,0x20,0x3d,0x20,0x5f,0x31,0x34,0x5f,0x75,0x5f,
    0x63,0x6f,0x6c,0x6f,0x72,0x3b,0x0a,0x7d,0x0a,0x0a,0x53,0x50,0x49,0x52,0x56,0x5f,
    0x43,0x72,0x6f,0x73,0x73,0x5f,0x4f,0x75,0x74,0x70,0x75,0x74,0x20,0x6d,0x61,0x69,
    0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,0x72,0x61,0x67,0x5f,0x6d,
    0x61,0x69,0x6e,0x28,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x53,0x50,0x49,0x52,0x56,
    0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,0x4f,0x75,0x74,0x70,0x75,0x74,0x20,0x73,0x74,
    0x61,0x67,0x65,0x5f,0x6f,0x75,0x74,0x70,0x75,0x74,0x3b,0x0a,0x20,0x20,0x20,0x20,
    0x73,0x74,0x61,0x67,0x65,0x5f,0x6f,0x75,0x74,0x70,0x75,0x74,0x2e,0x72,0x65,0x73,
    0x75,0x6c,0x74,0x20,0x3d,0x20,0x72,0x65,0x73,0x75,0x6c,0x74,0x3b,0x0a,0x20,0x20,
    0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x6f,
    0x75,0x74,0x70,0x75,0x74,0x3b,0x0a,0x7d,0x0a,0x00,
};
/*
    #include <metal_stdlib>
    #include <simd/simd.h>
    
    using namespace metal;
    
    struct main0_out
    {
        float4 gl_Position [[position]];
    };
    
    struct main0_in
    {
        float2 in_pos [[attribute(0)]];
    };
    
    #line 10 "light.glsl"
    vertex main0_out main0(main0_in in [[stage_in]])
    {
        main0_out out = {};
    #line 10 "light.glsl"
    #line 11 "light.glsl"
        out.gl_Position = float4(in.in_pos, 0.0, 1.0);
        return out;
    }
    
*/
static const char light_vs_source_metal_macos[402] = {
    0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x3c,0x6d,0x65,0x74,0x61,0x6c,0x5f,
    0x73,0x74,0x64,0x6c,0x69,0x62,0x3e,0x0a,0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,
    0x20,0x3c,0x73,0x69,0x6d,0x64,0x2f,0x73,0x69,0x6d,0x64,0x2e,0x68,0x3e,0x0a,0x0a,
    0x75,0x73,0x69,0x6e,0x67,0x20,0x6e,0x61,0x6d,0x65,0x73,0x70,0x61,0x63,0x65,0x20,
    0x6d,0x65,0x74,0x61,0x6c,0x3b,0x0a,0x0a,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x6d,
    0x61,0x69,0x6e,0x30,0x5f,0x6f,0x75,0x74,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,
    0x6c,0x6f,0x61,0x74,0x34,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,
    0x6e,0x20,0x5b,0x5b,0x70,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x5d,0x5d,0x3b,0x0a,
    0x7d,0x3b,0x0a,0x0a,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x6d,0x61,0x69,0x6e,0x30,
    0x5f,0x69,0x6e,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x32,
    0x20,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x20,0x5b,0x5b,0x61,0x74,0x74,0x72,0x69,0x62,
    0x75,0x74,0x65,0x28,0x30,0x29,0x5d,0x5d,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,0x23,0x6c,
    0x69,0x6e,0x65,0x20,0x31,0x30,0x20,0x22,0x6c,0x69,0x67,0x68,0x74,0x2e,0x67,0x6c,
    0x73,0x6c,0x22,0x0a,0x76,0x65,0x72,0x74,0x65,0x78,0x20,0x6d,0x61,0x69,0x6e,0x30,
    0x5f,0x6f,0x75,0x74,0x20,0x6d,0x61,0x69,0x6e,0x30,0x28,0x6d,0x61,0x69,0x6e,0x30,
    0x5f,0x69,0x6e,0x20,0x69,0x6e,0x20,0x5b,0x5b,0x73,0x74,0x61,0x67,0x65,0x5f,0x69,
    0x6e,0x5d,0x5d,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x6d,0x61,0x69,0x6e,0x30,
    0x5f,0x6f,0x75,0x74,0x20,0x6f,0x75,0x74,0x20,0x3d,0x20,0x7b,0x7d,0x3b,0x0a,0x23,
    0x6c,0x69,0x6e,0x65,0x20,0x31,0x30,0x20,0x22,0x6c,0x69,0x67,0x68,0x74,0x2e,0x67,
    0x6c,0x73,0x6c,0x22,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x31,0x31,0x20,0x22,0x6c,
    0x69,0x67,0x68,0x74,0x2e,0x67,0x6c,0x73,0x6c,0x22,0x0a,0x20,0x20,0x20,0x20,0x6f,
    0x75,0x74,0x2e,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,
    0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x28,0x69,0x6e,0x2e,0x69,0x6e,0x5f,0x70,0x6f,
    0x73,0x2c,0x20,0x30,0x2e,0x30,0x2c,0x20,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x20,0x20,
    0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x6f,0x75,0x74,0x3b,0x0a,0x7d,0x0a,
    0x0a,0x00,
};
/*
    #include <metal_stdlib>
    #include <simd/simd.h>
    
    using namespace metal;
    
    struct fs_params
    {
        float4 u_color;
    };
    
    struct main0_out
    {
        float4 result [[color(0)]];
    };
    
    #line 14 "light.glsl"
    fragment main0_out main0(constant fs_params& _14 [[buffer(0)]])
    {
        main0_out out = {};
    #line 14 "light.glsl"
    #line 15 "light.glsl"
        out.result = _14.u_color;
        return out;
    }
    
*/
static const char light_fs_source_metal_macos[376] = {
    0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x3c,0x6d,0x65,0x74,0x61,0x6c,0x5f,
    0x73,0x74,0x64,0x6c,0x69,0x62,0x3e,0x0a,0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,
    0x20,0x3c,0x73,0x69,0x6d,0x64,0x2f,0x73,0x69,0x6d,0x64,0x2e,0x68,0x3e,0x0a,0x0a,
    0x75,0x73,0x69,0x6e,0x67,0x20,0x6e,0x61,0x6d,0x65,0x73,0x70,0x61,0x63,0x65,0x20,
    0x6d,0x65,0x74,0x61,0x6c,0x3b,0x0a,0x0a,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x66,
    0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,
    0x6c,0x6f,0x61,0x74,0x34,0x20,0x75,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x3b,0x0a,0x7d,
    0x3b,0x0a,0x0a,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x6d,0x61,0x69,0x6e,0x30,0x5f,
    0x6f,0x75,0x74,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,
    0x20,0x72,0x65,0x73,0x75,0x6c,0x74,0x20,0x5b,0x5b,0x63,0x6f,0x6c,0x6f,0x72,0x28,
    0x30,0x29,0x5d,0x5d,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,
    0x31,0x34,0x20,0x22,0x6c,0x69,0x67,0x68,0x74,0x2e,0x67,0x6c,0x73,0x6c,0x22,0x0a,
    0x66,0x72,0x61,0x67,0x6d,0x65,0x6e,0x74,0x20,0x6d,0x61,0x69,0x6e,0x30,0x5f,0x6f,
    0x75,0x74,0x20,0x6d,0x61,0x69,0x6e,0x30,0x28,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,
    0x74,0x20,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x26,0x20,0x5f,0x31,0x34,
    0x20,0x5b,0x5b,0x62,0x75,0x66,0x66,0x65,0x72,0x28,0x30,0x29,0x5d,0x5d,0x29,0x0a,
    0x7b,0x0a,0x20,0x20,0x20,0x20,0x6d,0x61,0x69,0x6e,0x30,0x5f,0x6f,0x75,0x74,0x20,
    0x6f,0x75,0x74,0x20,0x3d,0x20,0x7b,0x7d,0x3b,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,
    0x31,0x34,0x20,0x22,0x6c,0x69,0x67,0x68,0x74,0x2e,0x67,0x6c,0x73,0x6c,0x22,0x0a,
    0x23,0x6c,0x69,0x6e,0x65,0x20,0x31,0x35,0x20,0x22,0x6c,0x69,0x67,0x68,0x74,0x2e,
    0x67,0x6c,0x73,0x6c,0x22,0x0a,0x20,0x20,0x20,0x20,0x6f,0x75,0x74,0x2e,0x72,0x65,
    0x73,0x75,0x6c,0x74,0x20,0x3d,0x20,0x5f,0x31,0x34,0x2e,0x75,0x5f,0x63,0x6f,0x6c,
    0x6f,0x72,0x3b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x6f,
    0x75,0x74,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
#if !defined(SOKOL_GFX_INCLUDED)
  #error "Please include sokol_gfx.h before light_shader.h"
#endif
static inline const sg_shader_desc* light_shd_shader_desc(sg_backend backend) {
  if (backend == SG_BACKEND_GLCORE33) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.attrs[0].name = "in_pos";
      desc.vs.source = light_vs_source_glsl330;
      desc.vs.entry = "main";
      desc.fs.source = light_fs_source_glsl330;
      desc.fs.entry = "main";
      desc.fs.uniform_blocks[0].size = 16;
      desc.fs.uniform_blocks[0].layout = SG_UNIFORMLAYOUT_STD140;
      desc.fs.uniform_blocks[0].uniforms[0].name = "fs_params";
      desc.fs.uniform_blocks[0].uniforms[0].type = SG_UNIFORMTYPE_FLOAT4;
      desc.fs.uniform_blocks[0].uniforms[0].array_count = 1;
      desc.label = "light_shd_shader";
    }
    return &desc;
  }
  if (backend == SG_BACKEND_GLES2) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.attrs[0].name = "in_pos";
      desc.vs.source = light_vs_source_glsl100;
      desc.vs.entry = "main";
      desc.fs.source = light_fs_source_glsl100;
      desc.fs.entry = "main";
      desc.fs.uniform_blocks[0].size = 16;
      desc.fs.uniform_blocks[0].layout = SG_UNIFORMLAYOUT_STD140;
      desc.fs.uniform_blocks[0].uniforms[0].name = "fs_params";
      desc.fs.uniform_blocks[0].uniforms[0].type = SG_UNIFORMTYPE_FLOAT4;
      desc.fs.uniform_blocks[0].uniforms[0].array_count = 1;
      desc.label = "light_shd_shader";
    }
    return &desc;
  }
  if (backend == SG_BACKEND_GLES3) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.attrs[0].name = "in_pos";
      desc.vs.source = light_vs_source_glsl300es;
      desc.vs.entry = "main";
      desc.fs.source = light_fs_source_glsl300es;
      desc.fs.entry = "main";
      desc.fs.uniform_blocks[0].size = 16;
      desc.fs.uniform_blocks[0].layout = SG_UNIFORMLAYOUT_STD140;
      desc.fs.uniform_blocks[0].uniforms[0].name = "fs_params";
      desc.fs.uniform_blocks[0].uniforms[0].type = SG_UNIFORMTYPE_FLOAT4;
      desc.fs.uniform_blocks[0].uniforms[0].array_count = 1;
      desc.label = "light_shd_shader";
    }
    return &desc;
  }
  if (backend == SG_BACKEND_D3D11) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.attrs[0].sem_name = "TEXCOORD";
      desc.attrs[0].sem_index = 0;
      desc.vs.source = light_vs_source_hlsl5;
      desc.vs.d3d11_target = "vs_5_0";
      desc.vs.entry = "main";
      desc.fs.source = light_fs_source_hlsl5;
      desc.fs.d3d11_target = "ps_5_0";
      desc.fs.entry = "main";
      desc.fs.uniform_blocks[0].size = 16;
      desc.fs.uniform_blocks[0].layout = SG_UNIFORMLAYOUT_STD140;
      desc.label = "light_shd_shader";
    }
    return &desc;
  }
  if (backend == SG_BACKEND_METAL_MACOS) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.vs.source = light_vs_source_metal_macos;
      desc.vs.entry = "main0";
      desc.fs.source = light_fs_source_metal_macos;
      desc.fs.entry = "main0";
      desc.fs.uniform_blocks[0].size = 16;
      desc.fs.uniform_blocks[0].layout = SG_UNIFORMLAYOUT_STD140;
      desc.label = "light_shd_shader";
    }
    return &desc;
  }
  return 0;
}
static inline int light_shd_attr_slot(const char* attr_name) {
  (void)attr_name;
  if (0 == strcmp(attr_name, "in_pos")) {
    return 0;
  }
  return -1;
}
static inline int light_shd_image_slot(sg_shader_stage stage, const char* img_name) {
  (void)stage; (void)img_name;
  return -1;
}
static inline int light_shd_uniformblock_slot(sg_shader_stage stage, const char* ub_name) {
  (void)stage; (void)ub_name;
  if (SG_SHADERSTAGE_FS == stage) {
    if (0 == strcmp(ub_name, "fs_params")) {
      return 0;
    }
  }
  return -1;
}
static inline size_t light_shd_uniformblock_size(sg_shader_stage stage, const char* ub_name) {
  (void)stage; (void)ub_name;
  if (SG_SHADERSTAGE_FS == stage) {
    if (0 == strcmp(ub_name, "fs_params")) {
      return sizeof(light_fs_params_t);
    }
  }
  return 0;
}
static inline int light_shd_uniform_offset(sg_shader_stage stage, const char* ub_name, const char* u_name) {
  (void)stage; (void)ub_name; (void)u_name;
  if (SG_SHADERSTAGE_FS == stage) {
    if (0 == strcmp(ub_name, "fs_params")) {
      if (0 == strcmp(u_name, "u_color")) {
        return 0;
      }
    }
  }
  return -1;
}
static inline sg_shader_uniform_desc light_shd_uniform_desc(sg_shader_stage stage, const char* ub_name, const char* u_name) {
  (void)stage; (void)ub_name; (void)u_name;
  #if defined(__cplusplus)
  sg_shader_uniform_desc desc = {};
  #else
  sg_shader_uniform_desc desc = {0};
  #endif
  if (SG_SHADERSTAGE_FS == stage) {
    if (0 == strcmp(ub_name, "fs_params")) {
      if (0 == strcmp(u_name, "u_color")) {
        desc.name = "u_color";
        desc.type = SG_UNIFORMTYPE_FLOAT4;
        desc.array_count = 1;
        return desc;
      }
    }
  }
  return desc;
}

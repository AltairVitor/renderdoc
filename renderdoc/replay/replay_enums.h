/******************************************************************************
 * The MIT License (MIT)
 * 
 * Copyright (c) 2014 Crytek
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

#pragma once

// replay_shader.h

enum VarType
{
	eVar_Float = 0,
	eVar_Int,
	eVar_UInt,
	eVar_Double,
};

enum FormatComponentType
{
	eCompType_None = 0,
	eCompType_Float,
	eCompType_UNorm,
	eCompType_UNorm_SRGB,
	eCompType_SNorm,
	eCompType_UInt,
	eCompType_SInt,
	eCompType_Depth,
	eCompType_Double,
};

enum ShaderResourceType
{
	eResType_None,
	eResType_Buffer,
	eResType_Texture1D,
	eResType_Texture1DArray,
	eResType_Texture2D,
	eResType_Texture2DArray,
	eResType_Texture2DMS,
	eResType_Texture2DMSArray,
	eResType_Texture3D,
	eResType_TextureCube,
	eResType_TextureCubeArray,
};

enum SystemAttribute
{
	eAttr_None = 0,
	eAttr_Position,
	eAttr_ClipDistance,
	eAttr_CullDistance,
	eAttr_RTIndex,
	eAttr_ViewportIndex,
	eAttr_VertexIndex,
	eAttr_PrimitiveIndex,
	eAttr_InstanceIndex,
	eAttr_DispatchThreadIndex,
	eAttr_GroupIndex,
	eAttr_GroupFlatIndex,
	eAttr_GroupThreadIndex,
	eAttr_GSInstanceIndex,
	eAttr_OutputControlPointIndex,
	eAttr_DomainLocation,
	eAttr_IsFrontFace,
	eAttr_MSAACoverage,
	eAttr_MSAASampleIndex,
	eAttr_OuterTessFactor,
	eAttr_InsideTessFactor,
	eAttr_ColourOutput,
	eAttr_DepthOutput,
	eAttr_DepthOutputGreaterEqual,
	eAttr_DepthOutputLessEqual,
};

// replay_render.h

enum OutputType
{
	eOutputType_None = 0,
	eOutputType_TexDisplay,
	eOutputType_MeshDisplay,
};

enum MeshDataStage
{
	eMeshDataStage_Unknown = 0,
	eMeshDataStage_VSIn,
	eMeshDataStage_VSOut,
	eMeshDataStage_GSOut,
};

enum TextureDisplayOverlay
{
	eTexOverlay_None = 0,
	eTexOverlay_Drawcall,
	eTexOverlay_Wireframe,
	eTexOverlay_DepthBoth,
	eTexOverlay_StencilBoth,
	eTexOverlay_ViewportScissor,
	eTexOverlay_NaN,
	eTexOverlay_Clipping,
};

enum SpecialFormat
{
	eSpecial_Unknown = 0,
	eSpecial_BC1,
	eSpecial_BC2,
	eSpecial_BC3,
	eSpecial_BC4,
	eSpecial_BC5,
	eSpecial_BC6,
	eSpecial_BC7,
	eSpecial_R10G10B10A2,
	eSpecial_R11G11B10,
	eSpecial_B5G6R5,
	eSpecial_B5G5R5A1,
	eSpecial_R9G9B9E5,
	eSpecial_B8G8R8A8,
	eSpecial_B4G4R4A4,
	eSpecial_D24S8,
	eSpecial_D32S8,
	eSpecial_YUV,
};

enum APIPipelineStateType
{
	ePipelineState_D3D11,
	ePipelineState_OpenGL,
};

enum PrimitiveTopology
{
	eTopology_Unknown,
	eTopology_PointList,
	eTopology_LineList,
	eTopology_LineStrip,
	eTopology_LineLoop,
	eTopology_TriangleList,
	eTopology_TriangleStrip,
	eTopology_TriangleFan,
	eTopology_LineList_Adj,
	eTopology_LineStrip_Adj,
	eTopology_TriangleList_Adj,
	eTopology_TriangleStrip_Adj,
	eTopology_PatchList,
	eTopology_PatchList_1CPs = eTopology_PatchList,
	eTopology_PatchList_2CPs,
	eTopology_PatchList_3CPs,
	eTopology_PatchList_4CPs,
	eTopology_PatchList_5CPs,
	eTopology_PatchList_6CPs,
	eTopology_PatchList_7CPs,
	eTopology_PatchList_8CPs,
	eTopology_PatchList_9CPs,
	eTopology_PatchList_10CPs,
	eTopology_PatchList_11CPs,
	eTopology_PatchList_12CPs,
	eTopology_PatchList_13CPs,
	eTopology_PatchList_14CPs,
	eTopology_PatchList_15CPs,
	eTopology_PatchList_16CPs,
	eTopology_PatchList_17CPs,
	eTopology_PatchList_18CPs,
	eTopology_PatchList_19CPs,
	eTopology_PatchList_20CPs,
	eTopology_PatchList_21CPs,
	eTopology_PatchList_22CPs,
	eTopology_PatchList_23CPs,
	eTopology_PatchList_24CPs,
	eTopology_PatchList_25CPs,
	eTopology_PatchList_26CPs,
	eTopology_PatchList_27CPs,
	eTopology_PatchList_28CPs,
	eTopology_PatchList_29CPs,
	eTopology_PatchList_30CPs,
	eTopology_PatchList_31CPs,
	eTopology_PatchList_32CPs,
};

enum BufferCreationFlags
{
	eBufferCreate_VB			= 0x1,
	eBufferCreate_IB			= 0x2,
};

enum TextureCreationFlags
{
	eTextureCreate_SRV			= 0x1,
	eTextureCreate_RTV			= 0x2,
	eTextureCreate_DSV			= 0x4,
	eTextureCreate_UAV			= 0x8,
	eTextureCreate_SwapBuffer   = 0x10,
};

enum ShaderStageType
{
	eShaderStage_Vertex = 0,
	
	eShaderStage_Hull,
	eShaderStage_Tess_Control = eShaderStage_Hull,

	eShaderStage_Domain,
	eShaderStage_Tess_Eval = eShaderStage_Domain,

	eShaderStage_Geometry,

	eShaderStage_Pixel,
	eShaderStage_Fragment = eShaderStage_Pixel,

	eShaderStage_Compute,
};

enum DebugMessageCategory
{
	eDbgCategory_Application_Defined = 0,
	eDbgCategory_Miscellaneous,
	eDbgCategory_Initialization,
	eDbgCategory_Cleanup,
	eDbgCategory_Compilation,
	eDbgCategory_State_Creation,
	eDbgCategory_State_Setting,
	eDbgCategory_State_Getting,
	eDbgCategory_Resource_Manipulation,
	eDbgCategory_Execution,
	eDbgCategory_Shaders,
	eDbgCategory_Deprecated,
	eDbgCategory_Undefined,
	eDbgCategory_Portability,
	eDbgCategory_Performance,
};

enum DebugMessageSeverity
{
	eDbgSeverity_Corruption	= 0,
	eDbgSeverity_Error,
	eDbgSeverity_Warning,
	eDbgSeverity_Info,
};

enum ResourceUsage
{
	eUsage_None,

	eUsage_IA_VB,
	eUsage_IA_IB,

	eUsage_VS_CB,
	eUsage_HS_CB,
	eUsage_DS_CB,
	eUsage_GS_CB,
	eUsage_PS_CB,
	eUsage_CS_CB,

	eUsage_SO,

	eUsage_VS_SRV,
	eUsage_HS_SRV,
	eUsage_DS_SRV,
	eUsage_GS_SRV,
	eUsage_PS_SRV,
	eUsage_CS_SRV,

	eUsage_CS_UAV,
	eUsage_PS_UAV,

	eUsage_OM_RTV,
	eUsage_OM_DSV,

	eUsage_Clear,
};

enum DrawcallFlags
{
	// types
	eDraw_Clear			= 0x01,
	eDraw_Drawcall		= 0x02,
	eDraw_Dispatch		= 0x04,
	eDraw_CmdList		= 0x08,
	eDraw_SetMarker		= 0x10,
	eDraw_PushMarker	= 0x20,
	eDraw_Present		= 0x40,

	// flags
	eDraw_UseIBuffer	= 0x100,
	eDraw_Instanced		= 0x200,
	eDraw_Auto			= 0x400,
	eDraw_Indirect		= 0x800,
};

enum SolidShadeMode
{
	eShade_None = 0,
	eShade_Solid,
	eShade_Lit,
	eShade_Tex,
	eShade_VertCol,
};

enum TriangleFillMode
{
	eFill_Solid = 0,
	eFill_Wireframe,
};

enum TriangleCullMode
{
	eCull_None = 0,
	eCull_Front,
	eCull_Back,
};

enum ReplayCreateStatus
{
	eReplayCreate_Success = 0,
	eReplayCreate_UnknownError,
	eReplayCreate_InternalError,
	eReplayCreate_NetworkIOFailed,
	eReplayCreate_FileIOFailed,
	eReplayCreate_FileIncompatibleVersion,
	eReplayCreate_FileCorrupted,
	eReplayCreate_APIUnsupported,
	eReplayCreate_APIInitFailed,
	eReplayCreate_APIIncompatibleVersion,
	eReplayCreate_APIHardwareUnsupported,
};

enum RemoteMessageType
{
	eRemoteMsg_Unknown = 0,
	eRemoteMsg_Disconnected,
	eRemoteMsg_Busy,
	eRemoteMsg_Noop,
	eRemoteMsg_NewCapture,
	eRemoteMsg_CaptureCopied,
	eRemoteMsg_RegisterAPI,
};
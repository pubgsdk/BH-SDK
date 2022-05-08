// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GL_Prague_Audio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GL_Prague_Audio.GL_Prague_Audio_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AGL_Prague_Audio_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Prague_Audio.GL_Prague_Audio_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Prague_Audio.GL_Prague_Audio_C.ExecuteUbergraph_GL_Prague_Audio
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Prague_Audio_C::ExecuteUbergraph_GL_Prague_Audio(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Prague_Audio.GL_Prague_Audio_C.ExecuteUbergraph_GL_Prague_Audio"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

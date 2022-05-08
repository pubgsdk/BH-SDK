#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GL_Prague_Audio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GL_Prague_Audio.GL_Prague_Audio_C
// 0x0018 (0x0248 - 0x0230)
class AGL_Prague_Audio_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       TunnelInside;                                             // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkComponent*                                NewVar_1;                                                 // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GL_Prague_Audio.GL_Prague_Audio_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_GL_Prague_Audio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

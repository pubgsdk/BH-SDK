#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GL_ArchetypeSelectionScene_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GL_ArchetypeSelectionScene.GL_ArchetypeSelectionScene_C
// 0x0008 (0x0238 - 0x0230)
class AGL_ArchetypeSelectionScene_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GL_ArchetypeSelectionScene.GL_ArchetypeSelectionScene_C"));
		return ptr;
	}


	void SetLOD(int LODValue, class ATBP_PaperDoll_C* PaperDoll);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GL_ArchetypeSelectionScene(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

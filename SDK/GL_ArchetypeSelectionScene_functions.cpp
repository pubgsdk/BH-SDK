// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GL_ArchetypeSelectionScene_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GL_ArchetypeSelectionScene.GL_ArchetypeSelectionScene_C.SetLOD
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            LODValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBP_PaperDoll_C*        PaperDoll                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_ArchetypeSelectionScene_C::SetLOD(int LODValue, class ATBP_PaperDoll_C* PaperDoll)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_ArchetypeSelectionScene.GL_ArchetypeSelectionScene_C.SetLOD"));

	struct
	{
		int                            LODValue;
		class ATBP_PaperDoll_C*        PaperDoll;
	} params = {};

	params.LODValue = LODValue;
	params.PaperDoll = PaperDoll;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_ArchetypeSelectionScene.GL_ArchetypeSelectionScene_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_ArchetypeSelectionScene_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_ArchetypeSelectionScene.GL_ArchetypeSelectionScene_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_ArchetypeSelectionScene.GL_ArchetypeSelectionScene_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AGL_ArchetypeSelectionScene_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_ArchetypeSelectionScene.GL_ArchetypeSelectionScene_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_ArchetypeSelectionScene.GL_ArchetypeSelectionScene_C.ExecuteUbergraph_GL_ArchetypeSelectionScene
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_ArchetypeSelectionScene_C::ExecuteUbergraph_GL_ArchetypeSelectionScene(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_ArchetypeSelectionScene.GL_ArchetypeSelectionScene_C.ExecuteUbergraph_GL_ArchetypeSelectionScene"));

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

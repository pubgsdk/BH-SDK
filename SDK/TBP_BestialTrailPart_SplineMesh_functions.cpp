// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BestialTrailPart_SplineMesh_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Setup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Start_Location                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 End_Location                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 End_Tangent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          New_Dissappear_Time_Stamp      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BestialTrailPart_SplineMesh_C::Setup(const struct FVector& Start_Location, const struct FVector& End_Location, const struct FVector& End_Tangent, float New_Dissappear_Time_Stamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Setup"));

	struct
	{
		struct FVector                 Start_Location;
		struct FVector                 End_Location;
		struct FVector                 End_Tangent;
		float                          New_Dissappear_Time_Stamp;
	} params = {};

	params.Start_Location = Start_Location;
	params.End_Location = End_Location;
	params.End_Tangent = End_Tangent;
	params.New_Dissappear_Time_Stamp = New_Dissappear_Time_Stamp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ScheduleFade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Dissappear_At                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BestialTrailPart_SplineMesh_C::ScheduleFade(float Dissappear_At)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ScheduleFade"));

	struct
	{
		float                          Dissappear_At;
	} params = {};

	params.Dissappear_At = Dissappear_At;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Fade Out
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_BestialTrailPart_SplineMesh_C::Fade_Out()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Fade Out"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BestialTrailPart_SplineMesh_C::ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh"));

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

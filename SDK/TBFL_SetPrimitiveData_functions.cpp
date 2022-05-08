// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_SetPrimitiveData_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Awnings_Master
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 AlbedoMultiplier               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          EmissiveIntensity              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          EmissiveLightTextureInfluence  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          EmissiveBGTexture              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SetPrimitiveData_C::SetPrimitiveData_M_Awnings_Master(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& AlbedoMultiplier, float EmissiveIntensity, float EmissiveLightTextureInfluence, float EmissiveBGTexture, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Awnings_Master"));

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		struct FVector                 AlbedoMultiplier;
		float                          EmissiveIntensity;
		float                          EmissiveLightTextureInfluence;
		float                          EmissiveBGTexture;
		class UObject*                 __WorldContext;
	} params = {};

	params.PrimitiveComponent = PrimitiveComponent;
	params.AlbedoMultiplier = AlbedoMultiplier;
	params.EmissiveIntensity = EmissiveIntensity;
	params.EmissiveLightTextureInfluence = EmissiveLightTextureInfluence;
	params.EmissiveBGTexture = EmissiveBGTexture;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Decal_Master
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Alpha                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          FakeIntensity                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SetPrimitiveData_C::SetPrimitiveData_M_Decal_Master(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& Color, float Alpha, float FakeIntensity, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Decal_Master"));

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		struct FVector                 Color;
		float                          Alpha;
		float                          FakeIntensity;
		class UObject*                 __WorldContext;
	} params = {};

	params.PrimitiveComponent = PrimitiveComponent;
	params.Color = Color;
	params.Alpha = Alpha;
	params.FakeIntensity = FakeIntensity;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_MI_ShopWindGlass_01
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Color1                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Color2                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Emissive_Color                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Emissive_Multiplier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SetPrimitiveData_C::SetPrimitiveData_MI_ShopWindGlass_01(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& Color1, const struct FVector& Color2, const struct FVector& Emissive_Color, float Emissive_Multiplier, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_MI_ShopWindGlass_01"));

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		struct FVector                 Color1;
		struct FVector                 Color2;
		struct FVector                 Emissive_Color;
		float                          Emissive_Multiplier;
		class UObject*                 __WorldContext;
	} params = {};

	params.PrimitiveComponent = PrimitiveComponent;
	params.Color1 = Color1;
	params.Color2 = Color2;
	params.Emissive_Color = Emissive_Color;
	params.Emissive_Multiplier = Emissive_Multiplier;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Basic_Master
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Color1                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Color2                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               UV_Scale                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Emissive_Color                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Roughness_Offset               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Albedo_Hue_Shift               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Deffuse_Desaturation           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SetPrimitiveData_C::SetPrimitiveData_M_Basic_Master(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& Color1, const struct FVector& Color2, const struct FVector2D& UV_Scale, const struct FVector& Emissive_Color, float Roughness_Offset, float Albedo_Hue_Shift, float Deffuse_Desaturation, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Basic_Master"));

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		struct FVector                 Color1;
		struct FVector                 Color2;
		struct FVector2D               UV_Scale;
		struct FVector                 Emissive_Color;
		float                          Roughness_Offset;
		float                          Albedo_Hue_Shift;
		float                          Deffuse_Desaturation;
		class UObject*                 __WorldContext;
	} params = {};

	params.PrimitiveComponent = PrimitiveComponent;
	params.Color1 = Color1;
	params.Color2 = Color2;
	params.UV_Scale = UV_Scale;
	params.Emissive_Color = Emissive_Color;
	params.Roughness_Offset = Roughness_Offset;
	params.Albedo_Hue_Shift = Albedo_Hue_Shift;
	params.Deffuse_Desaturation = Deffuse_Desaturation;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

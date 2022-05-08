// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_TypeAndRarity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromLootCategory
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ETigerLootCategory             LootCategory                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UTBFL_TypeAndRarity_C::GetTextFromLootCategory(ETigerLootCategory LootCategory, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromLootCategory"));

	struct
	{
		ETigerLootCategory             LootCategory;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params = {};

	params.LootCategory = LootCategory;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetShortTextFromWeaponType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ETigerWeaponType               WeaponType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ShortType                      (CPF_Parm, CPF_OutParm)

void UTBFL_TypeAndRarity_C::GetShortTextFromWeaponType(ETigerWeaponType WeaponType, class UObject* __WorldContext, struct FText* ShortType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetShortTextFromWeaponType"));

	struct
	{
		ETigerWeaponType               WeaponType;
		class UObject*                 __WorldContext;
		struct FText                   ShortType;
	} params = {};

	params.WeaponType = WeaponType;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ShortType != nullptr)
		*ShortType = params.ShortType;
}


// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromAmmoType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerWeaponAmmoType           In_Ammo_Type                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UTBFL_TypeAndRarity_C::GetTextFromAmmoType(ETigerWeaponAmmoType In_Ammo_Type, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromAmmoType"));

	struct
	{
		ETigerWeaponAmmoType           In_Ammo_Type;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params = {};

	params.In_Ammo_Type = In_Ammo_Type;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorTextFromItemType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTigerItemAsset*         InItemAsset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ColorText                      (CPF_Parm, CPF_OutParm)

void UTBFL_TypeAndRarity_C::GetColorTextFromItemType(class UTigerItemAsset* InItemAsset, class UObject* __WorldContext, struct FText* ColorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorTextFromItemType"));

	struct
	{
		class UTigerItemAsset*         InItemAsset;
		class UObject*                 __WorldContext;
		struct FText                   ColorText;
	} params = {};

	params.InItemAsset = InItemAsset;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ColorText != nullptr)
		*ColorText = params.ColorText;
}


// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorTextFromItemRarity
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerItemRarity               In_Rarity                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ColorText                      (CPF_Parm, CPF_OutParm)

void UTBFL_TypeAndRarity_C::GetColorTextFromItemRarity(ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FText* ColorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorTextFromItemRarity"));

	struct
	{
		ETigerItemRarity               In_Rarity;
		class UObject*                 __WorldContext;
		struct FText                   ColorText;
	} params = {};

	params.In_Rarity = In_Rarity;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ColorText != nullptr)
		*ColorText = params.ColorText;
}


// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.SetRarityMaterialFromWeaponClass
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMeshComponent*          InMeshComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerWeapon*            InWeaponClass                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_TypeAndRarity_C::SetRarityMaterialFromWeaponClass(class UMeshComponent* InMeshComponent, class UTigerWeapon* InWeaponClass, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.SetRarityMaterialFromWeaponClass"));

	struct
	{
		class UMeshComponent*          InMeshComponent;
		class UTigerWeapon*            InWeaponClass;
		class UObject*                 __WorldContext;
	} params = {};

	params.InMeshComponent = InMeshComponent;
	params.InWeaponClass = InWeaponClass;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromItemType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerInventoryItemType        In_Item_Type                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InGetShortVersion              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UTBFL_TypeAndRarity_C::GetTextFromItemType(ETigerInventoryItemType In_Item_Type, bool InGetShortVersion, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromItemType"));

	struct
	{
		ETigerInventoryItemType        In_Item_Type;
		bool                           InGetShortVersion;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params = {};

	params.In_Item_Type = In_Item_Type;
	params.InGetShortVersion = InGetShortVersion;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromItemRarity
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerItemRarity               In_Rarity                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UTBFL_TypeAndRarity_C::GetTextFromItemRarity(ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromItemRarity"));

	struct
	{
		ETigerItemRarity               In_Rarity;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params = {};

	params.In_Rarity = In_Rarity;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetData
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerTypeAndRarityData* Data                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_TypeAndRarity_C::GetData(class UObject* __WorldContext, class UTigerTypeAndRarityData** Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetData"));

	struct
	{
		class UObject*                 __WorldContext;
		class UTigerTypeAndRarityData* Data;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorFromItemRarity
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerItemRarity               In_Rarity                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_TypeAndRarity_C::GetColorFromItemRarity(ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorFromItemRarity"));

	struct
	{
		ETigerItemRarity               In_Rarity;
		class UObject*                 __WorldContext;
		struct FLinearColor            Color;
	} params = {};

	params.In_Rarity = In_Rarity;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Color != nullptr)
		*Color = params.Color;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

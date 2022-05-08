// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Notification_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem_Combat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Pre_Text                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Post_Text                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Notification_Item_C::SetNewItem_Combat(const struct FText& Pre_Text, class UTexture2D* Texture, const struct FText& Post_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem_Combat"));

	struct
	{
		struct FText                   Pre_Text;
		class UTexture2D*              Texture;
		struct FText                   Post_Text;
	} params = {};

	params.Pre_Text = Pre_Text;
	params.Texture = Texture;
	params.Post_Text = Post_Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notification_Item_C::SetNewItem(const struct FText& Item, class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem"));

	struct
	{
		struct FText                   Item;
		class UTexture2D*              Texture;
	} params = {};

	params.Item = Item;
	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Notification_Item_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.ExecuteUbergraph_TBP_UI_Notification_Item
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notification_Item_C::ExecuteUbergraph_TBP_UI_Notification_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.ExecuteUbergraph_TBP_UI_Notification_Item"));

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

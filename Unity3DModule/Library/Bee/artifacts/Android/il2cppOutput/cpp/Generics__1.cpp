#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2, T3*, T4, T5, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5 p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, &p2, p3, &p4, &p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B;
struct Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB;
struct CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B;
struct DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C;
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5;
struct DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126;
struct DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874;
struct DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B;
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A;
struct Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B;
struct Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A;
struct Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7;
struct Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF;
struct EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F;
struct EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB;
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct IDictionary_2_t2FA61AE137EED621840AB6E61A1C75D249C05100;
struct IDictionary_2_tE849F992474EEBB668D9A9A590CF675D9449C7BE;
struct IDictionary_2_t81C94C2596A809C22FBCE957D38A8B8E80247769;
struct IDictionary_2_tBAB4B4F3D1E9859C43BD27825725B52EFAD07D0C;
struct IDictionary_2_t5316E1B118FCB8FCF8C09297C5DB7AE9CB7533C7;
struct IEnumerable_1_tC9B78BD09596EB85FA82FA63B091B4F61900F530;
struct IEnumerator_1_t1FC23C4652B02A4E4AE212074D88FC38BE085681;
struct IEnumerator_1_tC0408FCD0D690D95C68E5294CA36C400FFB79781;
struct IEnumerator_1_tD37712EF66C2DACD5DBFA05DB7CE341EF2FBA1EE;
struct IEnumerator_1_t1DE90964025F3E49484DDA43335AF57CECEAFBFF;
struct IEnumerator_1_tB91B38EF7DBADE91EDE695D68977568987137D29;
struct IEnumerator_1_tDFDA733A40523681099DF822E97AA4397205F8E5;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_t6EEEF539D2CA2C93760158FE927CE8A0B1E6AD2D;
struct IEqualityComparer_1_t49EBDA1133E48B1F11BA86D393C4766FB32F2501;
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t56DA9BBADF80D06B382719FBEE2A597D94458417;
struct IEqualityComparer_1_t95351C62AE7A3DC1F5A634C37AF7444A078B5B99;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEquatable_1_t4759C29625D27994F9F829C3543690B9329901F6;
struct IEquatable_1_tD61C76E85AFA1BC35DC351FA8820566763E24618;
struct KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575;
struct KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C;
struct KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE;
struct KeyCollection_t8A3D2A8A2AEED2DCB735C110440CB590EE84367C;
struct KeyCollection_t302F3368F4549F8C5F276558FB4458F9388EDFA7;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct Node_tC5111E77A2002D0AD173457666915D4D0BD59865;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
struct Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1;
struct ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96;
struct ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32;
struct ValueCollection_t20B4A413B40603707CB912BD61898CA43B3C28FF;
struct ValueCollection_t38496EABE25A048F0ED98E59AEDBB2FF22D81F98;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3;
struct EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0;
struct EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3;
struct EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E;
struct EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE;
struct KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F;
struct KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A;
struct KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856;
struct KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93;
struct KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IManagedVFSFileHandler_tB83893582A9A15F195D1895A33EE10FE7AA510BA;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformHelper_t5E497382616B62F0B318E53D098F90E22AB35722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral020F27A067D9C2A1BC9628BCE378DE63A6F2B5BE;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteral20D029102A70CD96274496928ED59E8B9C014BBA;
IL2CPP_EXTERN_C String_t* _stringLiteral2AA2E732DB2949176A84E755559B51D778BADC01;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral4CC02BED909F9630E59013E4804C6C269FF8370A;
IL2CPP_EXTERN_C String_t* _stringLiteral561DA6E332E7EF45E52D96B07EC786D85C2955BE;
IL2CPP_EXTERN_C String_t* _stringLiteral5B752FEA6C79E292F7975C9C7E92D2B4616F6B66;
IL2CPP_EXTERN_C String_t* _stringLiteral672E993A9AD93822B712B165C6987759C6DED80B;
IL2CPP_EXTERN_C String_t* _stringLiteral68445D6E030501243B18C07E57CF1AE5C1C5AAF2;
IL2CPP_EXTERN_C String_t* _stringLiteralA05D9DA01CB9AD0AA6BE899FE1E39018B72923DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBE1D2E11D58177AC5AC7C4A993B5BE6408F97DAA;
IL2CPP_EXTERN_C String_t* _stringLiteralBF10EFAF6473141D13A05C1B850DEF40E641A918;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC38D57307791EED2AD28D35927B9E90B23E6281D;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE59C400B29D20EE4CB5A86E1F46ED782D7872D43;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEC0CC039753090F0DDDF2727802FC6E1570B317B;
IL2CPP_EXTERN_C String_t* _stringLiteralEE87639B3A491E0E26BF98722E7EF266338FFC27;
IL2CPP_EXTERN_C String_t* _stringLiteralEF68BB0CB45867DA95163C2C6A4B0677DCE80DCF;
IL2CPP_EXTERN_C String_t* _stringLiteralFD8CE285C77CDFBCDCBA338A795AFF019E6C3B66;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3;
struct EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0;
struct EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3;
struct EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E;
struct EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE;
struct KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F;
struct KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A;
struct KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856;
struct KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93;
struct KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6  : public RuntimeObject
{
	Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C  : public RuntimeObject
{
};
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryKeyCollectionDebugView_2_tA967A5CC2E1F95032AE886F39B1005E56173D9D2  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_tE2C8C453C326A08B63223B59D5D010EFFE30BEF3  : public RuntimeObject
{
};
struct Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* ____keys;
	ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* ____keys;
	ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* ____keys;
	ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t8A3D2A8A2AEED2DCB735C110440CB590EE84367C* ____keys;
	ValueCollection_t20B4A413B40603707CB912BD61898CA43B3C28FF* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t302F3368F4549F8C5F276558FB4458F9388EDFA7* ____keys;
	ValueCollection_t38496EABE25A048F0ED98E59AEDBB2FF22D81F98* ____values;
	RuntimeObject* ____syncRoot;
};
struct EmptyArray_1_t2F24CF6B13CDDAA8B0F0764FD24AFE6483C69336  : public RuntimeObject
{
};
struct EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F  : public RuntimeObject
{
};
struct EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB  : public RuntimeObject
{
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9  : public RuntimeObject
{
};
struct KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575  : public RuntimeObject
{
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ____dictionary;
};
struct KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C  : public RuntimeObject
{
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ____dictionary;
};
struct KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE  : public RuntimeObject
{
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ____dictionary;
};
struct KeyCollection_t8A3D2A8A2AEED2DCB735C110440CB590EE84367C  : public RuntimeObject
{
	Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* ____dictionary;
};
struct KeyCollection_t302F3368F4549F8C5F276558FB4458F9388EDFA7  : public RuntimeObject
{
	Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* ____dictionary;
};
struct Node_tC5111E77A2002D0AD173457666915D4D0BD59865 : public RuntimeObject {};
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95  : public RuntimeObject
{
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* ____buckets;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____locks;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____countPerLock;
};
struct ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1  : public RuntimeObject
{
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ____dictionary;
};
struct ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96  : public RuntimeObject
{
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ____dictionary;
};
struct ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32  : public RuntimeObject
{
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ____dictionary;
};
struct ValueCollection_t20B4A413B40603707CB912BD61898CA43B3C28FF  : public RuntimeObject
{
	Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* ____dictionary;
};
struct ValueCollection_t38496EABE25A048F0ED98E59AEDBB2FF22D81F98  : public RuntimeObject
{
	Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* ____dictionary;
};
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4 
{
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_t10F0057B7F31913C37CBB3E2900A547A6C29CD6A 
{
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_tB493FE87234355650C78E0470CA13DDB7723BC9E 
{
	Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A 
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 
{
	int32_t ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	bool ___m_result;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Il2CppSharedGenericObject* ___m_result;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A 
{
	Il2CppSharedGenericObject* ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A 
{
	Il2CppSharedGenericObject* ___Item1;
	int32_t ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_pinvoke
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___value;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_com
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___value;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 
{
	int32_t ___handle;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};
struct Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 
{
	RuntimeObject* ___handler;
	int32_t ___handle;
};
struct Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8_marshaled_pinvoke
{
	RuntimeObject* ___handler;
	int32_t ___handle;
};
struct Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8_marshaled_com
{
	RuntimeObject* ___handler;
	int32_t ___handle;
};
struct U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E : public RuntimeObject {};
struct ConfiguredTaskAwaitable_1_t8CD88E253ADEFD17912937E545828FCB7A2F079C 
{
	ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4 ___m_configuredTaskAwaiter;
};
struct ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A 
{
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ___m_configuredTaskAwaiter;
};
struct ConfiguredTaskAwaitable_1_tE56E5FFFF24684ECCB77BA1DC390B2A255841BBF 
{
	ConfiguredTaskAwaiter_t10F0057B7F31913C37CBB3E2900A547A6C29CD6A ___m_configuredTaskAwaiter;
};
struct ConfiguredTaskAwaitable_1_t8049DBD77B6FE4C36E900554327F7CBFBFB4E7A2 
{
	ConfiguredTaskAwaiter_tB493FE87234355650C78E0470CA13DDB7723BC9E ___m_configuredTaskAwaiter;
};
struct ConfiguredTaskAwaitable_1_t7FFB03EADF9A67E9EE2A5DECE3FB4353344FE922 
{
	ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A ___m_configuredTaskAwaiter;
};
struct Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB 
{
	int32_t ___hashCode;
	int32_t ___next;
	InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___key;
	Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___value;
};
struct Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1 
{
	Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF  : public RuntimeObject
{
	ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* ____table;
	int32_t ____currentIndex;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ____current;
};
struct KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B 
{
	Guid_t ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE 
{
	InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___key;
	Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___value;
};
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D 
{
	intptr_t ___ptr;
};
struct DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126  : public RuntimeObject
{
	intptr_t ___U3CNativeInvocationContextU3Ek__BackingField;
	Il2CppSharedGenericObject* ___U3CNativeDelegateU3Ek__BackingField;
	ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___U3CProfilerMarkerU3Ek__BackingField;
};
struct DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874 : public RuntimeObject {};
struct Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF 
{
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF 
{
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A 
{
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t3249322F295351E1E39A22F8FF2D22A73275F8D5 
{
	Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE ____current;
	int32_t ____getEnumeratorRetType;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB  : public MulticastDelegate_t
{
};
struct CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct EmptyArray_1_t2F24CF6B13CDDAA8B0F0764FD24AFE6483C69336_StaticFields
{
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___Value;
};
struct EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F_StaticFields
{
	EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* ___defaultComparer;
};
struct EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB_StaticFields
{
	EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* ___defaultComparer;
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35_StaticFields
{
	EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9_StaticFields
{
	EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* ___defaultComparer;
};
struct GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields
{
	RuntimeObject* ___EPHEMERON_TOMBSTONE;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields
{
	CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* ___Log;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_tC5111E77A2002D0AD173457666915D4D0BD59865* m_Items[1];

	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8  : public RuntimeArray
{
	ALIGN_FIELD (8) Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 m_Items[1];

	inline Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 m_Items[1];

	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 m_Items[1];

	inline Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 m_Items[1];

	inline KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 m_Items[1];

	inline Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 m_Items[1];

	inline KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 m_Items[1];

	inline Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B m_Items[1];

	inline KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286 m_Items[1];

	inline Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 m_Items[1];

	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB m_Items[1];

	inline Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___handler), (void*)NULL);
	}
	inline Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___handler), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE m_Items[1];

	inline KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___handler), (void*)NULL);
	}
	inline KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___handler), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisIl2CppSharedGenericObject_m5283DEB09B854082CE5EFC9E4C1B19F4D8E1A5CA_gshared (Il2CppSharedGenericObject** ___0_location, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Volatile_Read_TisIl2CppSharedGenericObject_m80AA45DB17514248EE3F1C51892F22E546B63BC9_gshared (Il2CppSharedGenericObject** ___0_location, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_RecomputeSize_mECDE2A17589E6F9500A83C0BD216672E9E829463_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_RehashWithoutResize_m016B51E55C242F8FBCAF10DA8825E4B07B46FACC_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Rehash_mE974FC607D3B12E845F0E83D2BB55A7F1F3639F6_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_gshared_inline (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m030A122C25684BFEAB8B9214E9E281FF990638F2_gshared (Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF* __this, ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* ___0_table, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter__ctor_m5B53A410AE8900B3D565ED7C7FE9DAB92B2ECEC9_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___0_task, bool ___1_continueOnCapturedContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Task_1_get_ResultOnSuccess_m15F655DF9F8EE6F8388A9432454900F07EFC57BB_inline (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Task_1_get_ResultOnSuccess_mF098AC108FFA2E0D992306C6D956BA37874FAC77_inline (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC Task_1_get_ResultOnSuccess_mF2B4314A2FC0448358439C96FC6217501A2ACFE0_inline (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Task_1_get_ResultOnSuccess_mBB7F2275D4EF61A83D08373AA0D41ACC31AF73BD_gshared_inline (Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateWithContext_1_Equals_mADB622927C9751B007215E254AF4B8F45A121989_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_gshared_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_gshared_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_TisIntPtr_t_TisIl2CppSharedGenericObject_m0FE3DF8C5942D8532F80288C02A8FD80B7C6F1A1_gshared (intptr_t ___0_value1, Il2CppSharedGenericObject* ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_mDB3A971D9A28F20B00A5510D9B2DECEB3B76DEE5_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE4B120CEAC8B3FB8164A6B8421DB9482654758F3_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_gshared_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_gshared_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m38590317DE74DBE8D92F2CBEF07EB2166FD77F8A_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D4121FAC5AC308F9F11677446270359EE7F187F_gshared (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E_gshared (Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF* __this, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mECA349A5C568918987B1E5F01CF437B826B24473_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB372B26FF800DAB8A056AC36CEF56999C6B8C0B2_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD75EF58F66B595F8D3901C3452232FC94062088_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_gshared_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_gshared_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m86A5B73912916A5825210A61600309B0CEBE7022_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD0CA78640E4E9AEDF3F7B13285742812AD9D3F93_gshared (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8_gshared (Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF* __this, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2B49E5B27DE63B7B42984CEC07EAE9D3119B80F7_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m50080FF99F5F609F7C6D4A916D1A4264AB88BCC5_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFE8D024D7FA568AAB39FCF6DAF344F43EE1F4A43_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_gshared_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_gshared_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2BD0E6825D66721033A14ABB6F727A8D1C8E0628_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mAADB86C56A6064707D6B414C20886941E280A8C8_gshared (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D_gshared (Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A* __this, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4B80FC5F8BA8BAE74E0EAB023D785DFDA03A7F6A_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m93D471C69BDF1EE119D28B69BFACB3B4C6E1B9C5_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m49575A3BC27C2DD83D288B3E374AA0B5BA4C6E4A_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8F58774799ABFD0AF88167500E453B5252FF5FBB_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0DFAF670559B0FE516624A501EA61CB9B14B7B67_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB53657B4F779ED11B472769A9ABB51A093A4FF4B_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mB0ED89FC7985F9676A84AF8FDFD3C6C53F478C90_gshared_inline (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m03EB6ADF69217A5128CE44A71DAAA98C5D33B9FB_gshared_inline (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mC1EBE3B129C084E57C8F969D8D71CF9087B8D698_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8357524D1C8961A4028BC1DC44FE9AD5A78A092F_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m07FA12992B3DAD86BD9CD3797525EBC22BE69E15_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB203F4B742D836457DDC26B3493454EC84369344_gshared (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m32006CB0E3F8700C09347A914C1881579BCFFC65_gshared (Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1* __this, Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6079E76F44CA52BDA46A08AB89BC129EC1AFDACB_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFFD5EEA58232DF8B073F38D35C39D8CDCB6AD30D_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m82DAF2EEBEF35C89774A8E71F51F1BD13378620F_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2BB6CF3A683DE145DB22935870F3C63F3E8E3027_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6818D2210BF5328DBDF7247EB90D4E145D266C9E (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5A7B3A4BD35EE33EF1D23EC63D0BF8C835146F95 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* EqualityComparer_1_get_Default_m1382B31A95228129ADB9427B1EE639C76AB507FD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5A86DD7196BAD4E82E1612063D35AA69A41AC127 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m283F367ACCC4A2031B27BDECBAD5371A37A3E136 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 KeyValuePair_2_get_Key_m53238783BDA24C812C5D63BCE9F25FE73F867243_inline (KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 KeyValuePair_2_get_Value_mC76FA4AB276A8B74C6EFA434FC6F564522EB9710_inline (KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mF6F7D3ED64E85D31556C2FB7C87162FA40C8B452 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m37E8831114C391DE86E5265088822C77C8902039 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* EqualityComparer_1_get_Default_m2B4F62EDB23031C609551EC3F4671100D30E9CEA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m242481DE2BE6F14286AAC901883DDBDCFF8A3FB0 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mC7D1153B9AF14948CABDF03CB0B9F2738E9D73A2 (KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB32AE83D0B9758EC2EF27CE221A21821D81D1C66 (Enumerator_t3249322F295351E1E39A22F8FF2D22A73275F8D5* __this, Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7E43D940B96D7285E9B06A4995E5DC3E4F75D750 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mB1AA1911C550F562B65DE6DDC6F4936FADF503F4 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFE661A28565100336E2E0AC668DE8FBEE997B873 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBinding_t4902D3C6D27680D096CC41D83FFD0872785E57F8_mA18D5105179EC292D090491E378CBED448E54927 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2C8B19C423C5ADE5459015BE8B0361D2DA4D2AE2 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* EqualityComparer_1_CreateComparer_mDDE2C10C48FE5C71172724020C00DA2C431DBF21_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* EqualityComparer_1_CreateComparer_mB0408C395999134DEDD71AB568D127159ACF5141_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* EqualityComparer_1_CreateComparer_m538EEAA8DA010A259CC57D5123DA0B894EFC04BE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* EqualityComparer_1_CreateComparer_m596C801639AA4AC5BAEF2ADC1E5651C7F99C400F (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline void Volatile_Write_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_m9E4373050D190768311449568F896A3E1F52E227 (Node_tC5111E77A2002D0AD173457666915D4D0BD59865** ___0_location, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Node_tC5111E77A2002D0AD173457666915D4D0BD59865**, Node_tC5111E77A2002D0AD173457666915D4D0BD59865*, const RuntimeMethod*))Volatile_Write_TisIl2CppSharedGenericObject_m5283DEB09B854082CE5EFC9E4C1B19F4D8E1A5CA_gshared)(___0_location, ___1_value, method);
}
inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865* Volatile_Read_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_mD76E44CC90A4D6EA388439C0CC2E91C5AD5DFD7E (Node_tC5111E77A2002D0AD173457666915D4D0BD59865** ___0_location, const RuntimeMethod* method)
{
	return ((  Node_tC5111E77A2002D0AD173457666915D4D0BD59865* (*) (Node_tC5111E77A2002D0AD173457666915D4D0BD59865**, const RuntimeMethod*))Volatile_Read_TisIl2CppSharedGenericObject_m80AA45DB17514248EE3F1C51892F22E546B63BC9_gshared)(___0_location, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformHelper_get_ProcessorCount_m123AB465E201104882D03864A7C6E08F1A55F3F9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider_ConcurrentDictionary_AcquiringAllLocks_mF33BBE9D19970C7F3C3DB3C0F6BCF16BEEC26EFA (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* __this, int32_t ___0_numOfBuckets, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_register_ephemeron_array_m7798D3C75D2E2DC50CAA2422C2B36656D7793D18 (EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_RecomputeSize_mECDE2A17589E6F9500A83C0BD216672E9E829463 (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, const RuntimeMethod*))ConditionalWeakTable_2_RecomputeSize_mECDE2A17589E6F9500A83C0BD216672E9E829463_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_RehashWithoutResize_m016B51E55C242F8FBCAF10DA8825E4B07B46FACC (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, const RuntimeMethod*))ConditionalWeakTable_2_RehashWithoutResize_m016B51E55C242F8FBCAF10DA8825E4B07B46FACC_gshared)(__this, method);
}
inline void ConditionalWeakTable_2_Rehash_mE974FC607D3B12E845F0E83D2BB55A7F1F3639F6 (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, const RuntimeMethod*))ConditionalWeakTable_2_Rehash_mE974FC607D3B12E845F0E83D2BB55A7F1F3639F6_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2 (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_inline (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B*, Il2CppSharedGenericObject*, const RuntimeMethod*))CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_gshared_inline)(__this, ___0_key, method);
}
inline void ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0 (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m030A122C25684BFEAB8B9214E9E281FF990638F2 (Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF* __this, ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* ___0_table, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF*, ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, const RuntimeMethod*))Enumerator__ctor_m030A122C25684BFEAB8B9214E9E281FF990638F2_gshared)(__this, ___0_table, method);
}
inline KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_inline (const RuntimeMethod* method)
{
	return ((  KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* (*) (const RuntimeMethod*))Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_gshared_inline)(method);
}
inline void ConfiguredTaskAwaiter__ctor_m5B53A410AE8900B3D565ED7C7FE9DAB92B2ECEC9 (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___0_task, bool ___1_continueOnCapturedContext, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A*, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, bool, const RuntimeMethod*))ConfiguredTaskAwaiter__ctor_m5B53A410AE8900B3D565ED7C7FE9DAB92B2ECEC9_fshared)(__this, ___0_task, ___1_continueOnCapturedContext, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Task_1_get_ResultOnSuccess_m15F655DF9F8EE6F8388A9432454900F07EFC57BB_inline (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Task_1_get_ResultOnSuccess_mF098AC108FFA2E0D992306C6D956BA37874FAC77_inline (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC Task_1_get_ResultOnSuccess_mF2B4314A2FC0448358439C96FC6217501A2ACFE0_inline (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* Task_1_get_ResultOnSuccess_mBB7F2275D4EF61A83D08373AA0D41ACC31AF73BD_inline (Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18*, const RuntimeMethod*))Task_1_get_ResultOnSuccess_mBB7F2275D4EF61A83D08373AA0D41ACC31AF73BD_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_OnCompletedInternal_m8017DEDF7A41F58AFB178F31D417F47D3F83D5D4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_continuation, bool ___2_continueOnCapturedContext, bool ___3_flowExecutionContext, const RuntimeMethod* method) ;
inline void ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66 (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66_fshared)(__this, ___0_continuation, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mA98362A704FE2F8F5C21AD1309E7EA80EAA5F81D (ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D* __this, String_t* ___0_name, const RuntimeMethod* method) ;
inline bool DelegateWithContext_1_Equals_mADB622927C9751B007215E254AF4B8F45A121989 (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126*, DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126*, const RuntimeMethod*))DelegateWithContext_1_Equals_mADB622927C9751B007215E254AF4B8F45A121989_gshared)(__this, ___0_other, method);
}
inline intptr_t DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126*, const RuntimeMethod*))DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline Il2CppSharedGenericObject* DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126*, const RuntimeMethod*))DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_gshared_inline)(__this, method);
}
inline int32_t HashCode_Combine_TisIntPtr_t_TisIl2CppSharedGenericObject_m0FE3DF8C5942D8532F80288C02A8FD80B7C6F1A1 (intptr_t ___0_value1, Il2CppSharedGenericObject* ___1_value2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, Il2CppSharedGenericObject*, const RuntimeMethod*))HashCode_Combine_TisIntPtr_t_TisIl2CppSharedGenericObject_m0FE3DF8C5942D8532F80288C02A8FD80B7C6F1A1_gshared)(___0_value1, ___1_value2, method);
}
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline)(__this, method);
}
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_mDB3A971D9A28F20B00A5510D9B2DECEB3B76DEE5 (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B*, const RuntimeMethod*))DictionaryEnumerator_get_Entry_mDB3A971D9A28F20B00A5510D9B2DECEB3B76DEE5_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mE4B120CEAC8B3FB8164A6B8421DB9482654758F3 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mE4B120CEAC8B3FB8164A6B8421DB9482654758F3_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A (*) (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295*, const RuntimeMethod*))KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m28B3CAD60EA6848BE8C46114BD6E0C8FF936E72A (KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* __this, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575*, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mD531F2816B35D4869E5EB9CCD56794AD15649388 (ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* __this, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1*, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m38590317DE74DBE8D92F2CBEF07EB2166FD77F8A (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))Dictionary_2_Remove_m38590317DE74DBE8D92F2CBEF07EB2166FD77F8A_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mE694E1EB3DC6921BA682AB491035440877A5024C (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m0D4121FAC5AC308F9F11677446270359EE7F187F (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D4121FAC5AC308F9F11677446270359EE7F187F_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E (Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF* __this, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF*, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, int32_t, const RuntimeMethod*))Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7 (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mECA349A5C568918987B1E5F01CF437B826B24473 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, const RuntimeMethod*))Dictionary_2_Resize_mECA349A5C568918987B1E5F01CF437B826B24473_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mB372B26FF800DAB8A056AC36CEF56999C6B8C0B2 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_mB372B26FF800DAB8A056AC36CEF56999C6B8C0B2_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mAD75EF58F66B595F8D3901C3452232FC94062088 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mAD75EF58F66B595F8D3901C3452232FC94062088_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A (*) (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2*, const RuntimeMethod*))KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2*, const RuntimeMethod*))KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mD5E79842FA5F42C6B3E458407CA711BDAAB1FE69 (KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* __this, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C*, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m7782EC432C8B7591F78A35C56024E8E21C78A345 (ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* __this, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96*, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m86A5B73912916A5825210A61600309B0CEBE7022 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))Dictionary_2_Remove_m86A5B73912916A5825210A61600309B0CEBE7022_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m889AEFA656A4A6AB38DC123246E8BEC33647F2BB (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mD0CA78640E4E9AEDF3F7B13285742812AD9D3F93 (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mD0CA78640E4E9AEDF3F7B13285742812AD9D3F93_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8 (Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF* __this, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF*, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404 (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m2B49E5B27DE63B7B42984CEC07EAE9D3119B80F7 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, const RuntimeMethod*))Dictionary_2_Resize_m2B49E5B27DE63B7B42984CEC07EAE9D3119B80F7_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_set_Item_m50080FF99F5F609F7C6D4A916D1A4264AB88BCC5 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_m50080FF99F5F609F7C6D4A916D1A4264AB88BCC5_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5_gshared)(__this, ___0_capacity, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_mFE8D024D7FA568AAB39FCF6DAF344F43EE1F4A43 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mFE8D024D7FA568AAB39FCF6DAF344F43EE1F4A43_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, Guid_t, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B*, const RuntimeMethod*))KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m1DD9728163AEE8DECB0FD6CC40DDEB6E3B419E04 (KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* __this, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE*, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m16305A7173A73FFD4F82FAC103C980A99266B7E2 (ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* __this, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32*, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, Guid_t, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m2BD0E6825D66721033A14ABB6F727A8D1C8E0628 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_m2BD0E6825D66721033A14ABB6F727A8D1C8E0628_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m62CB7B656456CFDD5DC73F6ECAA5BAF24EFBA62C (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mAADB86C56A6064707D6B414C20886941E280A8C8 (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B*, Guid_t, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mAADB86C56A6064707D6B414C20886941E280A8C8_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D (Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A* __this, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A*, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, int32_t, const RuntimeMethod*))Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m4B80FC5F8BA8BAE74E0EAB023D785DFDA03A7F6A (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, const RuntimeMethod*))Dictionary_2_Resize_m4B80FC5F8BA8BAE74E0EAB023D785DFDA03A7F6A_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_set_Item_m93D471C69BDF1EE119D28B69BFACB3B4C6E1B9C5 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, Guid_t, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_m93D471C69BDF1EE119D28B69BFACB3B4C6E1B9C5_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_m49575A3BC27C2DD83D288B3E374AA0B5BA4C6E4A (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m49575A3BC27C2DD83D288B3E374AA0B5BA4C6E4A_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m8F58774799ABFD0AF88167500E453B5252FF5FBB (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m8F58774799ABFD0AF88167500E453B5252FF5FBB_gshared)(__this, ___0_capacity, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m0DFAF670559B0FE516624A501EA61CB9B14B7B67 (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m0DFAF670559B0FE516624A501EA61CB9B14B7B67_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mB53657B4F779ED11B472769A9ABB51A093A4FF4B (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_mB53657B4F779ED11B472769A9ABB51A093A4FF4B_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t KeyValuePair_2_get_Key_mB0ED89FC7985F9676A84AF8FDFD3C6C53F478C90_inline (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55*, const RuntimeMethod*))KeyValuePair_2_get_Key_mB0ED89FC7985F9676A84AF8FDFD3C6C53F478C90_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m03EB6ADF69217A5128CE44A71DAAA98C5D33B9FB_inline (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55*, const RuntimeMethod*))KeyValuePair_2_get_Value_m03EB6ADF69217A5128CE44A71DAAA98C5D33B9FB_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m574C0BEA657118596B91087FCD53CD5206AB8CE1 (KeyCollection_t8A3D2A8A2AEED2DCB735C110440CB590EE84367C* __this, Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t8A3D2A8A2AEED2DCB735C110440CB590EE84367C*, Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mC5E41CEAC9927A0756C903DA9D06C533F76D1913 (ValueCollection_t20B4A413B40603707CB912BD61898CA43B3C28FF* __this, Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t20B4A413B40603707CB912BD61898CA43B3C28FF*, Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mC1EBE3B129C084E57C8F969D8D71CF9087B8D698 (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mC1EBE3B129C084E57C8F969D8D71CF9087B8D698_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m8357524D1C8961A4028BC1DC44FE9AD5A78A092F (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, int32_t, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m8357524D1C8961A4028BC1DC44FE9AD5A78A092F_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m07FA12992B3DAD86BD9CD3797525EBC22BE69E15 (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m07FA12992B3DAD86BD9CD3797525EBC22BE69E15_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mCE5BB990E0EB80EB89D6FDF8DB85AF06C991991B (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mB203F4B742D836457DDC26B3493454EC84369344 (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mB203F4B742D836457DDC26B3493454EC84369344_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m32006CB0E3F8700C09347A914C1881579BCFFC65 (Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1* __this, Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1*, Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, int32_t, const RuntimeMethod*))Enumerator__ctor_m32006CB0E3F8700C09347A914C1881579BCFFC65_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m6079E76F44CA52BDA46A08AB89BC129EC1AFDACB (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m6079E76F44CA52BDA46A08AB89BC129EC1AFDACB_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mFFD5EEA58232DF8B073F38D35C39D8CDCB6AD30D (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, const RuntimeMethod*))Dictionary_2_Resize_mFFD5EEA58232DF8B073F38D35C39D8CDCB6AD30D_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m82DAF2EEBEF35C89774A8E71F51F1BD13378620F (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m82DAF2EEBEF35C89774A8E71F51F1BD13378620F_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_set_Item_m2BB6CF3A683DE145DB22935870F3C63F3E8E3027 (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_m2BB6CF3A683DE145DB22935870F3C63F3E8E3027_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6818D2210BF5328DBDF7247EB90D4E145D266C9E (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5A7B3A4BD35EE33EF1D23EC63D0BF8C835146F95 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* EqualityComparer_1_get_Default_m1382B31A95228129ADB9427B1EE639C76AB507FD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5A86DD7196BAD4E82E1612063D35AA69A41AC127 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m283F367ACCC4A2031B27BDECBAD5371A37A3E136 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 KeyValuePair_2_get_Key_m53238783BDA24C812C5D63BCE9F25FE73F867243_inline (KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 KeyValuePair_2_get_Value_mC76FA4AB276A8B74C6EFA434FC6F564522EB9710_inline (KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE* __this, const RuntimeMethod* method) ;
inline void KeyCollection__ctor_m02A1D71902F956CF8E4F3EBF6B393B3027059F88 (KeyCollection_t302F3368F4549F8C5F276558FB4458F9388EDFA7* __this, Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t302F3368F4549F8C5F276558FB4458F9388EDFA7*, Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m9F330FA04A0EDF48F556FA52CDB1C53E10AFC265 (ValueCollection_t38496EABE25A048F0ED98E59AEDBB2FF22D81F98* __this, Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t38496EABE25A048F0ED98E59AEDBB2FF22D81F98*, Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mF6F7D3ED64E85D31556C2FB7C87162FA40C8B452 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m37E8831114C391DE86E5265088822C77C8902039 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* EqualityComparer_1_get_Default_m2B4F62EDB23031C609551EC3F4671100D30E9CEA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m242481DE2BE6F14286AAC901883DDBDCFF8A3FB0 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mB2AF075C1A6CDDDB77A2F1AD3F7951AF2C655046 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mC7D1153B9AF14948CABDF03CB0B9F2738E9D73A2 (KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB32AE83D0B9758EC2EF27CE221A21821D81D1C66 (Enumerator_t3249322F295351E1E39A22F8FF2D22A73275F8D5* __this, Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7E43D940B96D7285E9B06A4995E5DC3E4F75D750 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InternalManagedFileHandle_GetHashCode_mE32B81694AB4072CB85B3DB3AE79CCFC80D534D4_inline (InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mB1AA1911C550F562B65DE6DDC6F4936FADF503F4 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFE661A28565100336E2E0AC668DE8FBEE997B873 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBinding_t4902D3C6D27680D096CC41D83FFD0872785E57F8_mA18D5105179EC292D090491E378CBED448E54927 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2C8B19C423C5ADE5459015BE8B0361D2DA4D2AE2 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, const RuntimeMethod* method) ;
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
inline EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* EqualityComparer_1_CreateComparer_mDDE2C10C48FE5C71172724020C00DA2C431DBF21 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mDDE2C10C48FE5C71172724020C00DA2C431DBF21_gshared)(method);
}
inline EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* EqualityComparer_1_CreateComparer_mB0408C395999134DEDD71AB568D127159ACF5141 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mB0408C395999134DEDD71AB568D127159ACF5141_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* EqualityComparer_1_CreateComparer_m538EEAA8DA010A259CC57D5123DA0B894EFC04BE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* EqualityComparer_1_CreateComparer_m596C801639AA4AC5BAEF2ADC1E5651C7F99C400F (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_IsValueWriteAtomic_m73B3152A5054C8CCE39DDD9701EE7939D4CCAD7F_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		Type_t* L_4 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 3)))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0056;
			}
			case 7:
			{
				goto IL_0056;
			}
			case 8:
			{
				goto IL_0058;
			}
			case 9:
			{
				goto IL_0058;
			}
			case 10:
			{
				goto IL_0056;
			}
			case 11:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0056:
	{
		return (bool)1;
	}

IL_0058:
	{
		int32_t L_7;
		L_7 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)8))? 1 : 0);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m98B384EE9F320311B30C60598D7FEE8220A765D3_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(NULL);
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, bool, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, L_0, ((int32_t)31), (bool)1, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m2D6D3AB210309E5FC0C270696B064E7F63B6732D_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(NULL);
		RuntimeObject* L_1 = ___0_comparer;
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, bool, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, L_0, ((int32_t)31), (bool)1, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_InitializeFromCollection_mD655938CF27AF72CA2E5DE04DAC9D544F2B32F05_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_8 = L_6;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_2 = alloca(SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
	memset(V_2, 0, SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
	{
		RuntimeObject* L_0 = ___0_collection;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
				il2cpp_codegen_memcpy(V_2, L_5, SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_6);
				bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_6);
				if (L_7)
				{
					goto IL_0023_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_0023_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_8);
				RuntimeObject* L_9 = __this->____comparer;
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_9);
				int32_t L_11;
				L_11 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_10: *(void**)L_10));
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_12);
				bool L_13;
				L_13 = InvokerFuncInvoker6< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny, bool, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_8: *(void**)L_8), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_12: *(void**)L_12), (bool)0, (bool)0, (Il2CppFullySharedGenericAny*)V_0);
				if (L_13)
				{
					goto IL_005a_1;
				}
			}
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC0CC039753090F0DDDF2727802FC6E1570B317B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
			}

IL_005a_1:
			{
				RuntimeObject* L_15 = V_1;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_006e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		int32_t L_17 = __this->____budget;
		if (L_17)
		{
			goto IL_009b;
		}
	}
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_18 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_18);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_19 = L_18->____buckets;
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_21 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21->____locks;
		NullCheck(L_22);
		int32_t L_23 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_22)->max_length),NULL));
		__this->____budget = ((int32_t)(L_20/L_23));
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m6641D528D40D97FA0C5A07E6343F1ED807898699_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, int32_t ___0_concurrencyLevel, int32_t ___1_capacity, bool ___2_growLockArray, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* G_B11_0 = NULL;
	ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* G_B11_1 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* G_B10_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_concurrencyLevel;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF10EFAF6473141D13A05C1B850DEF40E641A918)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68445D6E030501243B18C07E57CF1AE5C1C5AAF2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_001a:
	{
		int32_t L_2 = ___1_capacity;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE59C400B29D20EE4CB5A86E1F46ED782D7872D43)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_002e:
	{
		int32_t L_4 = ___1_capacity;
		int32_t L_5 = ___0_concurrencyLevel;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = ___0_concurrencyLevel;
		___1_capacity = L_6;
	}

IL_0035:
	{
		int32_t L_7 = ___0_concurrencyLevel;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		V_3 = 0;
		goto IL_004c;
	}

IL_0040:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = V_3;
		RuntimeObject* L_11 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_11, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (RuntimeObject*)L_11);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004c:
	{
		int32_t L_13 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0040;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_1 = L_18;
		int32_t L_19 = ___1_capacity;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_20 = (NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_19);
		V_2 = L_20;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_21 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_24 = (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		((  void (*) (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*, NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_24, L_21, L_22, L_23, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____tables = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_24);
		RuntimeObject* L_25 = ___3_comparer;
		RuntimeObject* L_26 = L_25;
		if (L_26)
		{
			G_B11_0 = L_26;
			G_B11_1 = __this;
			goto IL_007e;
		}
		G_B10_0 = L_26;
		G_B10_1 = __this;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		G_B11_0 = ((RuntimeObject*)(L_27));
		G_B11_1 = G_B10_1;
	}

IL_007e:
	{
		NullCheck(G_B11_1);
		G_B11_1->____comparer = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->____comparer), (void*)G_B11_0);
		bool L_28 = ___2_growLockArray;
		__this->____growLockArray = L_28;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_29)->max_length),NULL));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		__this->____budget = ((int32_t)(L_30/L_32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_mD11107344E270A7538B40D278E52532A0649D829_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		RuntimeObject* L_3 = __this->____comparer;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_4: *(void**)L_4));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___1_value : &___1_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		bool L_7;
		L_7 = InvokerFuncInvoker6< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny, bool, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_2: *(void**)L_2), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_6: *(void**)L_6), (bool)0, (bool)1, (Il2CppFullySharedGenericAny*)V_0);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemoveInternal_m4A393BED6764C80F4849E88293A4D9D36234B313_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, bool ___2_matchValue, Il2CppFullySharedGenericAny ___3_oldValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_31 = L_1;
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_52 = L_36;
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	int32_t V_0 = 0;
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_6 = NULL;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_7 = NULL;
	bool V_8 = false;
	{
		RuntimeObject* L_0 = __this->____comparer;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_1: *(void**)L_1));
		V_0 = L_2;
	}

IL_000d:
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_3 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_1 = L_3;
		int32_t L_4 = V_0;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = V_1;
		NullCheck(L_5);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_6 = L_5->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_8 = V_1;
		NullCheck(L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8->____locks;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (int32_t, int32_t*, int32_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))(L_4, (&V_2), (&V_3), L_7, L_10, NULL);
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_11 = V_1;
		NullCheck(L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11->____locks;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011d:
			{
				{
					bool L_16 = V_5;
					if (!L_16)
					{
						goto IL_0128;
					}
				}
				{
					RuntimeObject* L_17 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_17, NULL);
				}

IL_0128:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_18 = V_4;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_18, (&V_5), NULL);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_19 = V_1;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_20 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_19) == ((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_20)))
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_000d;
			}

IL_0053_1:
			{
				V_6 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)NULL;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_21 = V_1;
				NullCheck(L_21);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_22 = L_21->____buckets;
				int32_t L_23 = V_2;
				NullCheck(L_22);
				int32_t L_24 = L_23;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_7 = L_25;
				goto IL_0114_1;
			}

IL_0065_1:
			{
				int32_t L_26 = V_0;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_27 = V_7;
				int32_t L_28 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_27, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23));
				if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
				{
					goto IL_0105_1;
				}
			}
			{
				RuntimeObject* L_29 = __this->____comparer;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_30 = V_7;
				il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				il2cpp_codegen_memcpy(L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				NullCheck(L_29);
				bool L_33;
				L_33 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_31: *(void**)L_31), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_32: *(void**)L_32));
				if (!L_33)
				{
					goto IL_0105_1;
				}
			}
			{
				bool L_34 = ___2_matchValue;
				if (!L_34)
				{
					goto IL_00ae_1;
				}
			}
			{
				EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_35;
				L_35 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
				il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___3_oldValue : &___3_oldValue), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_37 = V_7;
				il2cpp_codegen_memcpy(L_38, il2cpp_codegen_get_field_data_pointer(L_37, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				NullCheck(L_35);
				bool L_39;
				L_39 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_38: *(void**)L_38));
				if (L_39)
				{
					goto IL_00ae_1;
				}
			}
			{
				Il2CppFullySharedGenericAny* L_40 = ___1_value;
				il2cpp_codegen_initobj(L_40, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				V_8 = (bool)0;
				goto IL_0132;
			}

IL_00ae_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_41 = V_6;
				if (L_41)
				{
					goto IL_00ce_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_42 = V_1;
				NullCheck(L_42);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_43 = L_42->____buckets;
				int32_t L_44 = V_2;
				NullCheck(L_43);
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_45 = V_7;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_46 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_45, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28));
				il2cpp_codegen_memory_barrier();
				Volatile_Write_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_m9E4373050D190768311449568F896A3E1F52E227(((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), L_46, NULL);
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_47 = V_6;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_48 = V_7;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_49 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_48, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28));
				il2cpp_codegen_memory_barrier();
				NullCheck(L_47);
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_write_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*, true>(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28), L_49);
			}

IL_00e0_1:
			{
				Il2CppFullySharedGenericAny* L_50 = ___1_value;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_51 = V_7;
				il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_field_data_pointer(L_51, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_50, L_52, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (void**)(Il2CppFullySharedGenericAny*)L_50, (void*)L_52);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_53 = V_1;
				NullCheck(L_53);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = L_53->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_55 = V_3;
				NullCheck(L_54);
				int32_t* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)));
				int32_t L_57 = *(L_56);
				*(L_56) = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
				V_8 = (bool)1;
				goto IL_0132;
			}

IL_0105_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_58 = V_7;
				V_6 = L_58;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_59 = V_7;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_60 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_59, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28));
				il2cpp_codegen_memory_barrier();
				V_7 = L_60;
			}

IL_0114_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_61 = V_7;
				if (L_61)
				{
					goto IL_0065_1;
				}
			}
			{
				goto IL_0129;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0129:
	{
		Il2CppFullySharedGenericAny* L_62 = ___1_value;
		il2cpp_codegen_initobj(L_62, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		return (bool)0;
	}

IL_0132:
	{
		bool L_63 = V_8;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m394ECF25DA7E42CBCE88AC5357D1DF70E5FB95E0_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		RuntimeObject* L_3 = __this->____comparer;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_4: *(void**)L_4));
		Il2CppFullySharedGenericAny* L_6 = ___1_value;
		bool L_7;
		L_7 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_2: *(void**)L_2), L_5, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValueInternal_m8BB840B1605A1FA8F0503DDF00B4BADAE21809BB_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_hashcode, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_2 = NULL;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1 = ___1_hashcode;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = V_0;
		NullCheck(L_2);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_3 = L_2->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31)))(L_1, L_4, NULL);
		V_1 = L_5;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_6 = V_0;
		NullCheck(L_6);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_7 = L_6->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_9;
		L_9 = Volatile_Read_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_mD76E44CC90A4D6EA388439C0CC2E91C5AD5DFD7E(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), NULL);
		V_2 = L_9;
		goto IL_0060;
	}

IL_002c:
	{
		int32_t L_10 = ___1_hashcode;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_11 = V_2;
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23));
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_14 = V_2;
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_field_data_pointer(L_14, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_16: *(void**)L_16));
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_18 = ___2_value;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_19 = V_2;
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_field_data_pointer(L_19, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_18, L_20, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (void**)(Il2CppFullySharedGenericAny*)L_18, (void*)L_20);
		return (bool)1;
	}

IL_0057:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_21 = V_2;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_22 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28));
		il2cpp_codegen_memory_barrier();
		V_2 = L_22;
	}

IL_0060:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_23 = V_2;
		if (L_23)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_24 = ___2_value;
		il2cpp_codegen_initobj(L_24, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_Clear_mBA89387480CBDF6E872ABCEA395CC5040C2A6132_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	int32_t V_0 = 0;
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_1 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{
				int32_t L_0 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34)))(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
			NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_1 = (NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)((int32_t)31));
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = __this->____tables;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2->____locks;
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_4 = __this->____tables;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_4);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->____countPerLock;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_5);
			int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_8 = (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
			((  void (*) (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*, NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_8, L_1, L_3, L_7, NULL);
			V_1 = L_8;
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_9 = V_1;
			il2cpp_codegen_memory_barrier();
			__this->____tables = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_9);
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_10 = V_1;
			NullCheck(L_10);
			NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_11 = L_10->____buckets;
			NullCheck(L_11);
			int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_13 = V_1;
			NullCheck(L_13);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13->____locks;
			NullCheck(L_14);
			int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
			CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			int32_t L_16;
			L_16 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)(L_12/L_15)), NULL);
			__this->____budget = L_16;
			goto IL_006b;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m641512B29A4F9DFA75019D8E0EB46B12D95BE2D0_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{
				int32_t L_4 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34)))(__this, 0, L_4, NULL);
				return;
			}
		});
		try
		{
			{
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
				V_1 = 0;
				V_2 = 0;
				goto IL_004a_1;
			}

IL_0032_1:
			{
				int32_t L_5 = V_1;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_6 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_6);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_8 = V_2;
				NullCheck(L_7);
				int32_t L_9 = L_8;
				int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
				V_1 = ((int32_t)il2cpp_codegen_add(L_5, L_10));
				int32_t L_11 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_004a_1:
			{
				int32_t L_12 = V_2;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_13 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_13);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13->____locks;
				NullCheck(L_14);
				int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
				if ((((int32_t)L_12) >= ((int32_t)L_15)))
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_16 = V_1;
				if ((((int32_t)L_16) >= ((int32_t)0)))
				{
					goto IL_0032_1;
				}
			}

IL_0060_1:
			{
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_17 = ___0_array;
				NullCheck(L_17);
				int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
				int32_t L_19 = V_1;
				int32_t L_20 = ___1_index;
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, L_19))) < ((int32_t)L_20)))
				{
					goto IL_006c_1;
				}
			}
			{
				int32_t L_21 = V_1;
				if ((((int32_t)L_21) >= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}

IL_006c_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral672E993A9AD93822B712B165C6987759C6DED80B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
			}

IL_0077_1:
			{
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = ___0_array;
				int32_t L_24 = ___1_index;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35)))(__this, L_23, L_24, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
				goto IL_008a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ConcurrentDictionary_2_ToArray_m95F353F48726B8602C9E1D0E09770526620EEFEB_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_2 = NULL;
	int32_t V_3 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_4 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{
				int32_t L_0 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34)))(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
				V_1 = 0;
				V_3 = 0;
				goto IL_0028_1;
			}

IL_0010_1:
			{
				int32_t L_1 = V_1;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_2);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_4 = V_3;
				NullCheck(L_3);
				int32_t L_5 = L_4;
				int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
				if (((int64_t)L_1 + (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_1 + (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				V_1 = ((int32_t)il2cpp_codegen_add(L_1, L_6));
				int32_t L_7 = V_3;
				if (((int64_t)L_7 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_7 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
			}

IL_0028_1:
			{
				int32_t L_8 = V_3;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_9 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_9);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
				NullCheck(L_10);
				int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
				if ((((int32_t)L_8) < ((int32_t)L_11)))
				{
					goto IL_0010_1;
				}
			}
			{
				int32_t L_12 = V_1;
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13;
				L_13 = ((  KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
				V_4 = L_13;
				goto IL_0063;
			}

IL_0046_1:
			{
				int32_t L_14 = V_1;
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_15 = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), (uint32_t)L_14);
				V_2 = L_15;
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_16 = V_2;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35)))(__this, L_16, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_17 = V_2;
				V_4 = L_17;
				goto IL_0063;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_4;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToPairs_mB29DE9F99C438139032B46CF257772B8D67C9D81_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_14 = alloca(SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_2 = NULL;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0045;
	}

IL_0012:
	{
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_003e;
	}

IL_0018:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_8 = V_2;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_10 = V_2;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		memset(L_14, 0, SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? il2cpp_codegen_memcpy(L_12, L_9, SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? il2cpp_codegen_memcpy(L_13, L_11, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF): *(void**)L_11), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_14, SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_14);
		int32_t L_15 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_16 = V_2;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_17 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28));
		il2cpp_codegen_memory_barrier();
		V_2 = L_17;
	}

IL_003e:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_18 = V_2;
		if (L_18)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0045:
	{
		int32_t L_20 = V_1;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToEntries_m963F17C04F9A702D1C83334C27ABD9BC936DF357_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_2 = NULL;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_004f;
	}

IL_0012:
	{
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_0048;
	}

IL_0018:
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_8 = V_2;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_9);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_11 = V_2;
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_12);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_14;
		memset((&L_14), 0, sizeof(L_14));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_14), L_10, L_13, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_14);
		int32_t L_15 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_16 = V_2;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_17 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28));
		il2cpp_codegen_memory_barrier();
		V_2 = L_17;
	}

IL_0048:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_18 = V_2;
		if (L_18)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004f:
	{
		int32_t L_20 = V_1;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToObjects_mCC63F0BBFE09722AC0F6C6D383DDF8D7A47DFBD2_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_14 = alloca(SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_2 = NULL;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0046;
	}

IL_0012:
	{
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_003f;
	}

IL_0018:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_8 = V_2;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_10 = V_2;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		memset(L_14, 0, SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? il2cpp_codegen_memcpy(L_12, L_9, SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? il2cpp_codegen_memcpy(L_13, L_11, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF): *(void**)L_11), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), L_14);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_15);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_15);
		int32_t L_16 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_16, 1));
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_17 = V_2;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_18 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28));
		il2cpp_codegen_memory_barrier();
		V_2 = L_18;
	}

IL_003f:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_19 = V_2;
		if (L_19)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0046:
	{
		int32_t L_21 = V_1;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_22)->max_length),NULL));
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_mB8E0C74DF9390E74FAED06B806E09260FEA6D626_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* L_0 = (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 39));
		((  void (*) (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40)))(L_0, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* L_1 = L_0;
		NullCheck(L_1);
		il2cpp_codegen_write_field_data<ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 39),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41), __this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAddInternal_mA7A0FCD2CFB2DE061C507C25D130AC58B32CEB7A_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_hashcode, Il2CppFullySharedGenericAny ___2_value, bool ___3_updateIfExists, bool ___4_acquireLock, Il2CppFullySharedGenericAny* ___5_resultingValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_40 = L_32;
	const Il2CppFullySharedGenericAny L_65 = L_32;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_41 = L_38;
	const Il2CppFullySharedGenericAny L_54 = L_38;
	const Il2CppFullySharedGenericAny L_57 = L_38;
	const Il2CppFullySharedGenericAny L_66 = L_38;
	const Il2CppFullySharedGenericAny L_88 = L_38;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_5 = NULL;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_6 = NULL;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_7 = NULL;
	bool V_8 = false;

IL_0000:
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_2 = L_0;
		int32_t L_1 = ___1_hashcode;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = V_2;
		NullCheck(L_2);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_3 = L_2->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = V_2;
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5->____locks;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (int32_t, int32_t*, int32_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))(L_1, (&V_0), (&V_1), L_4, L_7, NULL);
		V_3 = (bool)0;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014e:
			{
				{
					bool L_8 = V_4;
					if (!L_8)
					{
						goto IL_015f;
					}
				}
				{
					Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_9 = V_2;
					NullCheck(L_9);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
					int32_t L_11 = V_1;
					NullCheck(L_10);
					int32_t L_12 = L_11;
					RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_13, NULL);
				}

IL_015f:
				{
					return;
				}
			}
		});
		try
		{
			{
				bool L_14 = ___4_acquireLock;
				if (!L_14)
				{
					goto IL_003b_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_15 = V_2;
				NullCheck(L_15);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15->____locks;
				int32_t L_17 = V_1;
				NullCheck(L_16);
				int32_t L_18 = L_17;
				RuntimeObject* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_19, (&V_4), NULL);
			}

IL_003b_1:
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_20 = V_2;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_21 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_20) == ((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_21)))
				{
					goto IL_0048_1;
				}
			}
			{
				goto IL_0000;
			}

IL_0048_1:
			{
				V_5 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)NULL;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_22 = V_2;
				NullCheck(L_22);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_23 = L_22->____buckets;
				int32_t L_24 = V_0;
				NullCheck(L_23);
				int32_t L_25 = L_24;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
				V_6 = L_26;
				goto IL_00fd_1;
			}

IL_005a_1:
			{
				int32_t L_27 = ___1_hashcode;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_28 = V_6;
				int32_t L_29 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_28, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23));
				if ((!(((uint32_t)L_27) == ((uint32_t)L_29))))
				{
					goto IL_00ee_1;
				}
			}
			{
				RuntimeObject* L_30 = __this->____comparer;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_31 = V_6;
				il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_field_data_pointer(L_31, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				NullCheck(L_30);
				bool L_34;
				L_34 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_33: *(void**)L_33));
				if (!L_34)
				{
					goto IL_00ee_1;
				}
			}
			{
				bool L_35 = ___3_updateIfExists;
				if (!L_35)
				{
					goto IL_00d8_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				bool L_36 = ((ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)))->___s_isValueWriteAtomic;
				if (!L_36)
				{
					goto IL_0091_1;
				}
			}
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_37 = V_6;
				il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_value : &___2_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				NullCheck(L_37);
				il2cpp_codegen_write_field_data<true>(L_37, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27), L_38, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				goto IL_00ce_1;
			}

IL_0091_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_39 = V_6;
				il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_field_data_pointer(L_39, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_value : &___2_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				int32_t L_42 = ___1_hashcode;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_43 = V_6;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_44 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_43, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28));
				il2cpp_codegen_memory_barrier();
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_45 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
				InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, int32_t, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42), L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_40: *(void**)L_40), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_41: *(void**)L_41), L_42, L_44);
				V_7 = L_45;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_46 = V_5;
				if (L_46)
				{
					goto IL_00c3_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_47 = V_2;
				NullCheck(L_47);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_48 = L_47->____buckets;
				int32_t L_49 = V_0;
				NullCheck(L_48);
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_50 = V_7;
				Volatile_Write_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_m9E4373050D190768311449568F896A3E1F52E227(((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), L_50, NULL);
				goto IL_00ce_1;
			}

IL_00c3_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_51 = V_5;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_52 = V_7;
				NullCheck(L_51);
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_write_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*, true>(L_51, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28), L_52);
			}

IL_00ce_1:
			{
				Il2CppFullySharedGenericAny* L_53 = ___5_resultingValue;
				il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_value : &___2_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_53, L_54, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (void**)(Il2CppFullySharedGenericAny*)L_53, (void*)L_54);
				goto IL_00e6_1;
			}

IL_00d8_1:
			{
				Il2CppFullySharedGenericAny* L_55 = ___5_resultingValue;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_56 = V_6;
				il2cpp_codegen_memcpy(L_57, il2cpp_codegen_get_field_data_pointer(L_56, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_55, L_57, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (void**)(Il2CppFullySharedGenericAny*)L_55, (void*)L_57);
			}

IL_00e6_1:
			{
				V_8 = (bool)0;
				goto IL_0174;
			}

IL_00ee_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_58 = V_6;
				V_5 = L_58;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_59 = V_6;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_60 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_59, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28));
				il2cpp_codegen_memory_barrier();
				V_6 = L_60;
			}

IL_00fd_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_61 = V_6;
				if (L_61)
				{
					goto IL_005a_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_62 = V_2;
				NullCheck(L_62);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_63 = L_62->____buckets;
				int32_t L_64 = V_0;
				NullCheck(L_63);
				il2cpp_codegen_memcpy(L_65, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				il2cpp_codegen_memcpy(L_66, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_value : &___2_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				int32_t L_67 = ___1_hashcode;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_68 = V_2;
				NullCheck(L_68);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_69 = L_68->____buckets;
				int32_t L_70 = V_0;
				NullCheck(L_69);
				int32_t L_71 = L_70;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_73 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
				InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, int32_t, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42), L_73, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_65: *(void**)L_65), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_66: *(void**)L_66), L_67, L_72);
				Volatile_Write_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_m9E4373050D190768311449568F896A3E1F52E227(((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), L_73, NULL);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_74 = V_2;
				NullCheck(L_74);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = L_74->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_76 = V_1;
				NullCheck(L_75);
				int32_t* L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)));
				int32_t L_78 = *(L_77);
				if (((int64_t)L_78 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_78 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				*(L_77) = ((int32_t)il2cpp_codegen_add(L_78, 1));
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_79 = V_2;
				NullCheck(L_79);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = L_79->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_81 = V_1;
				NullCheck(L_80);
				int32_t L_82 = L_81;
				int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
				int32_t L_84 = __this->____budget;
				if ((((int32_t)L_83) <= ((int32_t)L_84)))
				{
					goto IL_014c_1;
				}
			}
			{
				V_3 = (bool)1;
			}

IL_014c_1:
			{
				goto IL_0160;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0160:
	{
		bool L_85 = V_3;
		if (!L_85)
		{
			goto IL_016a;
		}
	}
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_86 = V_2;
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, Tables_tD895B223685217918C345ED5D52074F7E29E5F95*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43)))(__this, L_86, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
	}

IL_016a:
	{
		Il2CppFullySharedGenericAny* L_87 = ___5_resultingValue;
		il2cpp_codegen_memcpy(L_88, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_value : &___2_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_87, L_88, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (void**)(Il2CppFullySharedGenericAny*)L_87, (void*)L_88);
		return (bool)1;
	}

IL_0174:
	{
		bool L_89 = V_8;
		return L_89;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_mB9751D1BE987E51A6B1B2D2BF2851678004FF269_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		RuntimeObject* L_3 = __this->____comparer;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_4: *(void**)L_4));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___1_value : &___1_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		bool L_7;
		L_7 = InvokerFuncInvoker6< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny, bool, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_2: *(void**)L_2), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_6: *(void**)L_6), (bool)1, (bool)1, (Il2CppFullySharedGenericAny*)V_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNullException_mEF107859AE4074A8B054F778F40CE4FD1D8D271F_fshared (const RuntimeMethod* method) 
{
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_0 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_Count_mC28E6D211E5DB9E4E103B4105579628203C682A4_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				int32_t L_0 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34)))(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
			int32_t L_1;
			L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44)))(__this, NULL);
			V_1 = L_1;
			goto IL_001c;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001c:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_GetCountInternal_mABB50180C1CBF2FBBBAB8667ED74FCC74FFB3F1C_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_001e;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_1 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1->____countPerLock;
		il2cpp_codegen_memory_barrier();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_5));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		int32_t L_7 = V_1;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_8 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____countPerLock;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GetOrAdd_mA265AF3ECF3E03D9F24BA7F18C80A70ED9F34846_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_valueFactory, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_13 = L_7;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_16 = L_14;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_1, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___1_valueFactory;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF68BB0CB45867DA95163C2C6A4B0677DCE80DCF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001b:
	{
		RuntimeObject* L_4 = __this->____comparer;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_4);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_5: *(void**)L_5));
		V_0 = L_6;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_7: *(void**)L_7), L_8, (Il2CppFullySharedGenericAny*)V_1);
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		int32_t L_11 = V_0;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_12 = ___1_valueFactory;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_12);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_13: *(void**)L_13), (Il2CppFullySharedGenericAny*)L_14);
		bool L_15;
		L_15 = InvokerFuncInvoker6< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny, bool, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_10: *(void**)L_10), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_14: *(void**)L_14), (bool)0, (bool)1, (Il2CppFullySharedGenericAny*)V_1);
	}

IL_0048:
	{
		il2cpp_codegen_memcpy(L_16, V_1, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m2A1279D54D2B0303EDFD78EBBE582219E9A6AE7A_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___1_value : &___1_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_1: *(void**)L_1));
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC38D57307791EED2AD28D35927B9E90B23E6281D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mB91CF82B34FFCC4ED31CA846C7B0F17E34EB3726_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 47), (RuntimeObject*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2C94785221845049CC56412AEB3F0B5EE13BDEA7_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		bool L_1;
		L_1 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_0: *(void**)L_0), (Il2CppFullySharedGenericAny*)V_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_4);
		NullCheck(L_2);
		bool L_5;
		L_5 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mE2C54BEA1DE0B6A2373F3D15DD5DF0B49D5D5EAF_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m882A8610C8C7A397ED7CA5BC5875A0C98E49BA36_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral561DA6E332E7EF45E52D96B07EC786D85C2955BE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral020F27A067D9C2A1BC9628BCE378DE63A6F2B5BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001e:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_4);
		bool L_5;
		L_5 = InvokerFuncInvoker4< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_3: *(void**)L_3), (Il2CppFullySharedGenericAny*)V_0, (bool)1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IEnumerable_GetEnumerator_m067A04B1E5100135B9D3D280C142C3840B8B6664_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_GetEnumerator_m3401A01C25F9B8BE9CBEF5375640E47FF18E3E39_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	{
		DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* L_0 = (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 52));
		((  void (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53)))(L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_set_Item_mDB89BB0838AFD262BE7D3F1604FE2AB1721CEC8A_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD8CE285C77CDFBCDCBA338A795AFF019E6C3B66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		RuntimeObject* L_3 = ___1_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20D029102A70CD96274496928ED59E8B9C014BBA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_002e:
	{
		RuntimeObject* L_5 = ___0_key;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_6);
		RuntimeObject* L_8 = ___1_value;
		void* L_10 = UnBox_Any(L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_9);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_ICollection_CopyTo_m83DE666C7BAB44677E1D0CDA16D76998451EB411_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_1 = NULL;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_3 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	int32_t V_6 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cc:
			{
				int32_t L_4 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34)))(__this, 0, L_4, NULL);
				return;
			}
		});
		try
		{
			{
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				V_1 = L_5;
				V_2 = 0;
				V_6 = 0;
				goto IL_0050_1;
			}

IL_003c_1:
			{
				int32_t L_6 = V_2;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_7 = V_1;
				NullCheck(L_7);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_9 = V_6;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				V_2 = ((int32_t)il2cpp_codegen_add(L_6, L_11));
				int32_t L_12 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_0050_1:
			{
				int32_t L_13 = V_6;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_14 = V_1;
				NullCheck(L_14);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14->____locks;
				NullCheck(L_15);
				int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
				if ((((int32_t)L_13) >= ((int32_t)L_16)))
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_17 = V_2;
				if ((((int32_t)L_17) >= ((int32_t)0)))
				{
					goto IL_003c_1;
				}
			}

IL_0060_1:
			{
				RuntimeArray* L_18 = ___0_array;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = il2cpp_codegen_array_get_length(L_18);
				int32_t L_20 = V_2;
				int32_t L_21 = ___1_index;
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_19, L_20))) < ((int32_t)L_21)))
				{
					goto IL_006f_1;
				}
			}
			{
				int32_t L_22 = V_2;
				if ((((int32_t)L_22) >= ((int32_t)0)))
				{
					goto IL_007a_1;
				}
			}

IL_006f_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral672E993A9AD93822B712B165C6987759C6DED80B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
			}

IL_007a_1:
			{
				RuntimeArray* L_24 = ___0_array;
				V_3 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInstSealed((RuntimeObject*)L_24, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_25 = V_3;
				if (!L_25)
				{
					goto IL_008e_1;
				}
			}
			{
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_26 = V_3;
				int32_t L_27 = ___1_index;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35)))(__this, L_26, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
				goto IL_00d5;
			}

IL_008e_1:
			{
				RuntimeArray* L_28 = ___0_array;
				V_4 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_28, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_29 = V_4;
				if (!L_29)
				{
					goto IL_00a5_1;
				}
			}
			{
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_30 = V_4;
				int32_t L_31 = ___1_index;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55)))(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
				goto IL_00d5;
			}

IL_00a5_1:
			{
				RuntimeArray* L_32 = ___0_array;
				V_5 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_32, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = V_5;
				if (!L_33)
				{
					goto IL_00bc_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = V_5;
				int32_t L_35 = ___1_index;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56)))(__this, L_34, L_35, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
				goto IL_00d5;
			}

IL_00bc_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_36 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA05D9DA01CB9AD0AA6BE899FE1E39018B72923DB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, method);
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d5:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_ICollection_get_SyncRoot_m8AD982FEACF3DB9191434BE19BF7A1A5B1F1EC69_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4CC02BED909F9630E59013E4804C6C269FF8370A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GrowTable_mB6A05711EB1E3E4657393BA2295265B9C4746A93_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ___0_tables, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	const Il2CppFullySharedGenericAny L_83 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_85 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01fd:
			{
				int32_t L_0 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34)))(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 57)))(__this, 0, 1, (&V_0), NULL);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_1 = ___0_tables;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_1) == ((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_2)))
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0206;
			}

IL_001c_1:
			{
				int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
				V_1 = L_3;
				V_7 = 0;
				goto IL_0039_1;
			}

IL_0024_1:
			{
				int64_t L_4 = V_1;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = ___0_tables;
				NullCheck(L_5);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_7 = V_7;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
				V_1 = ((int64_t)il2cpp_codegen_add(L_4, L_10));
				int32_t L_11 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_0039_1:
			{
				int32_t L_12 = V_7;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_13 = ___0_tables;
				NullCheck(L_13);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->____countPerLock;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_14);
				int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
				if ((((int32_t)L_12) < ((int32_t)L_15)))
				{
					goto IL_0024_1;
				}
			}
			{
				int64_t L_16 = V_1;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_17 = ___0_tables;
				NullCheck(L_17);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_18 = L_17->____buckets;
				NullCheck(L_18);
				int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
				int64_t L_20 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)(L_19/4)),NULL));
				if ((((int64_t)L_16) >= ((int64_t)L_20)))
				{
					goto IL_007c_1;
				}
			}
			{
				int32_t L_21 = __this->____budget;
				__this->____budget = ((int32_t)il2cpp_codegen_multiply(2, L_21));
				int32_t L_22 = __this->____budget;
				if ((((int32_t)L_22) >= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}
			{
				__this->____budget = ((int32_t)2147483647LL);
			}

IL_0077_1:
			{
				goto IL_0206;
			}

IL_007c_1:
			{
				V_2 = 0;
				V_3 = (bool)0;
			}
			try
			{
				{
					Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_23 = ___0_tables;
					NullCheck(L_23);
					NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_24 = L_23->____buckets;
					NullCheck(L_24);
					int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
					if (((int64_t)L_25 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_25 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_25, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_25, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_25, 2)), 1));
					goto IL_0093_2;
				}

IL_008f_2:
				{
					int32_t L_26 = V_2;
					if (((int64_t)L_26 + (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_26 + (int64_t)2 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					V_2 = ((int32_t)il2cpp_codegen_add(L_26, 2));
				}

IL_0093_2:
				{
					int32_t L_27 = V_2;
					if (!((int32_t)(L_27%3)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_28 = V_2;
					if (!((int32_t)(L_28%5)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_29 = V_2;
					if (!((int32_t)(L_29%7)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_30 = V_2;
					if ((((int32_t)L_30) <= ((int32_t)((int32_t)2146435071))))
					{
						goto IL_00ac_2;
					}
				}
				{
					V_3 = (bool)1;
				}

IL_00ac_2:
				{
					goto IL_00b3_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ae_1;
				}
				throw e;
			}

CATCH_00ae_1:
			{
				OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_31 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));;
				V_3 = (bool)1;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_00b3_1;
			}

IL_00b3_1:
			{
				bool L_32 = V_3;
				if (!L_32)
				{
					goto IL_00c7_1;
				}
			}
			{
				V_2 = ((int32_t)2146435071);
				__this->____budget = ((int32_t)2147483647LL);
			}

IL_00c7_1:
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_33 = ___0_tables;
				NullCheck(L_33);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_33->____locks;
				NullCheck(L_34);
				int32_t L_35 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_34)->max_length),NULL));
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 57)))(__this, 1, L_35, (&V_0), NULL);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_36 = ___0_tables;
				NullCheck(L_36);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36->____locks;
				V_4 = L_37;
				bool L_38 = __this->____growLockArray;
				if (!L_38)
				{
					goto IL_0143_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_39 = ___0_tables;
				NullCheck(L_39);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_39->____locks;
				NullCheck(L_40);
				int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
				if ((((int32_t)L_41) >= ((int32_t)((int32_t)1024))))
				{
					goto IL_0143_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_42 = ___0_tables;
				NullCheck(L_42);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42->____locks;
				NullCheck(L_43);
				int32_t L_44 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_43)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_44, 2)));
				V_4 = L_45;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_46 = ___0_tables;
				NullCheck(L_46);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = L_46->____locks;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = V_4;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_49 = ___0_tables;
				NullCheck(L_49);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_49->____locks;
				NullCheck(L_50);
				int32_t L_51 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_50)->max_length),NULL));
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_47, 0, (RuntimeArray*)L_48, 0, L_51, NULL);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_52 = ___0_tables;
				NullCheck(L_52);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = L_52->____locks;
				NullCheck(L_53);
				int32_t L_54 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_53)->max_length),NULL));
				V_8 = L_54;
				goto IL_013b_1;
			}

IL_012b_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = V_4;
				int32_t L_56 = V_8;
				RuntimeObject* L_57 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
				Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_57, NULL);
				NullCheck(L_55);
				ArrayElementTypeCheck (L_55, L_57);
				(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (RuntimeObject*)L_57);
				int32_t L_58 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_58, 1));
			}

IL_013b_1:
			{
				int32_t L_59 = V_8;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = V_4;
				NullCheck(L_60);
				int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
				if ((((int32_t)L_59) < ((int32_t)L_61)))
				{
					goto IL_012b_1;
				}
			}

IL_0143_1:
			{
				int32_t L_62 = V_2;
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_63 = (NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_62);
				V_5 = L_63;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = V_4;
				NullCheck(L_64);
				int32_t L_65 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_64)->max_length),NULL));
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_65);
				V_6 = L_66;
				V_9 = 0;
				goto IL_01c7_1;
			}

IL_015b_1:
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_67 = ___0_tables;
				NullCheck(L_67);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_68 = L_67->____buckets;
				int32_t L_69 = V_9;
				NullCheck(L_68);
				int32_t L_70 = L_69;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
				V_10 = L_71;
				goto IL_01bd_1;
			}

IL_0168_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_72 = V_10;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_73 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_72, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28));
				il2cpp_codegen_memory_barrier();
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_74 = V_10;
				int32_t L_75 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_74, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23));
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_76 = V_5;
				NullCheck(L_76);
				int32_t L_77 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_76)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = V_4;
				NullCheck(L_78);
				int32_t L_79 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_78)->max_length),NULL));
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				((  void (*) (int32_t, int32_t*, int32_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))(L_75, (&V_11), (&V_12), L_77, L_79, NULL);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_80 = V_5;
				int32_t L_81 = V_11;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_82 = V_10;
				il2cpp_codegen_memcpy(L_83, il2cpp_codegen_get_field_data_pointer(L_82, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_84 = V_10;
				il2cpp_codegen_memcpy(L_85, il2cpp_codegen_get_field_data_pointer(L_84, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_86 = V_10;
				int32_t L_87 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_86, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23));
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_88 = V_5;
				int32_t L_89 = V_11;
				NullCheck(L_88);
				int32_t L_90 = L_89;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_92 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
				InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, int32_t, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42), L_92, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_83: *(void**)L_83), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_85: *(void**)L_85), L_87, L_91);
				NullCheck(L_80);
				(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)L_92);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_6;
				int32_t L_94 = V_12;
				NullCheck(L_93);
				int32_t* L_95 = ((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)));
				int32_t L_96 = *(L_95);
				if (((int64_t)L_96 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_96 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				*(L_95) = ((int32_t)il2cpp_codegen_add(L_96, 1));
				V_10 = L_73;
			}

IL_01bd_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_97 = V_10;
				if (L_97)
				{
					goto IL_0168_1;
				}
			}
			{
				int32_t L_98 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_98, 1));
			}

IL_01c7_1:
			{
				int32_t L_99 = V_9;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_100 = ___0_tables;
				NullCheck(L_100);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_101 = L_100->____buckets;
				NullCheck(L_101);
				int32_t L_102 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_101)->max_length),NULL));
				if ((((int32_t)L_99) < ((int32_t)L_102)))
				{
					goto IL_015b_1;
				}
			}
			{
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_103 = V_5;
				NullCheck(L_103);
				int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_105 = V_4;
				NullCheck(L_105);
				int32_t L_106 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_105)->max_length),NULL));
				CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_107;
				L_107 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)(L_104/L_106)), NULL);
				__this->____budget = L_107;
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_108 = V_5;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_109 = V_4;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_6;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_111 = (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
				((  void (*) (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*, NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_111, L_108, L_109, L_110, NULL);
				il2cpp_codegen_memory_barrier();
				__this->____tables = L_111;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_111);
				goto IL_0206;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0206:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_GetBucket_m03138F665728DE0C8A4DA4A1720688414FC3C19B_fshared (int32_t ___0_hashcode, int32_t ___1_bucketCount, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_hashcode;
		int32_t L_1 = ___1_bucketCount;
		return ((int32_t)(((int32_t)(L_0&((int32_t)2147483647LL)))%L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GetBucketAndLockNo_mE101532D7BE14E9975B37B3B265789858E3FDEBA_fshared (int32_t ___0_hashcode, int32_t* ___1_bucketNo, int32_t* ___2_lockNo, int32_t ___3_bucketCount, int32_t ___4_lockCount, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___1_bucketNo;
		int32_t L_1 = ___0_hashcode;
		int32_t L_2 = ___3_bucketCount;
		*(L_0) = ((int32_t)(((int32_t)(L_1&((int32_t)2147483647LL)))%L_2));
		int32_t* L_3 = ___2_lockNo;
		int32_t* L_4 = ___1_bucketNo;
		int32_t L_5 = *(L_4);
		int32_t L_6 = ___4_lockCount;
		*(L_3) = ((int32_t)(L_5%L_6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m81D29524F689635A16DBE57641F159E3CF7218A6_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformHelper_t5E497382616B62F0B318E53D098F90E22AB35722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PlatformHelper_t5E497382616B62F0B318E53D098F90E22AB35722_StaticInit);
	{
		CHECKED_LOCAL_INIT(PlatformHelper_t5E497382616B62F0B318E53D098F90E22AB35722_StaticInit,(PlatformHelper_t5E497382616B62F0B318E53D098F90E22AB35722_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = PlatformHelper_get_ProcessorCount_m123AB465E201104882D03864A7C6E08F1A55F3F9(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AcquireAllLocks_m116BB98251DC473C28D00F477613C1F68EF7EB8D_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, int32_t* ___0_locksAcquired, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit);
	{
		CHECKED_LOCAL_INIT(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit,(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_0 = ((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log;
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		CHECKED_LOCAL_INIT(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit,(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_2 = ((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_3 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_3);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		NullCheck(L_2);
		CDSCollectionETWBCLProvider_ConcurrentDictionary_AcquiringAllLocks_mF33BBE9D19970C7F3C3DB3C0F6BCF16BEEC26EFA(L_2, L_5, NULL);
	}

IL_0025:
	{
		int32_t* L_6 = ___0_locksAcquired;
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 57)))(__this, 0, 1, L_6, NULL);
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_7 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7->____locks;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t* L_10 = ___0_locksAcquired;
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 57)))(__this, 1, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AcquireLocks_mCDAED510DBF85E983BCB08E9A214020EDE61D999_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, int32_t* ___2_locksAcquired, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0->____locks;
		V_0 = L_1;
		int32_t L_2 = ___0_fromInclusive;
		V_1 = L_2;
		goto IL_002e;
	}

IL_0012:
	{
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_0029;
					}
				}
				{
					int32_t* L_4 = ___2_locksAcquired;
					int32_t* L_5 = ___2_locksAcquired;
					int32_t L_6 = *(L_5);
					*(L_4) = ((int32_t)il2cpp_codegen_add(L_6, 1));
				}

IL_0029:
				{
					return;
				}
			}
		});
		try
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
			int32_t L_8 = V_1;
			NullCheck(L_7);
			int32_t L_9 = L_8;
			RuntimeObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_10, (&V_2), NULL);
			goto IL_002a;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___1_toExclusive;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ReleaseLocks_mDD3A19565988306ADEA547D93369C5FADCAF3F5B_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_fromInclusive;
		V_0 = L_0;
		goto IL_001c;
	}

IL_0004:
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_1 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1->____locks;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001c:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___1_toExclusive;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnSerializing_m9B65EAFEB34D9D46A4C31A79E060E9782F86FD8C_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_0 = NULL;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_1;
		L_1 = ((  KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 58)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 58));
		__this->____serializationArray = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)L_1);
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = V_0;
		NullCheck(L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2->____locks;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		__this->____serializationConcurrencyLevel = L_4;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = V_0;
		NullCheck(L_5);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_6 = L_5->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____serializationCapacity = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnSerialized_m6A8BB19CBAC6EE0EB0B3AF1F424EDE25CD918043_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	{
		__this->____serializationArray = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnDeserialized_mD01735199C55716C1CDAFFA84F3C04129D476A79_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = __this->____serializationArray;
		V_0 = L_0;
		int32_t L_1 = __this->____serializationCapacity;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_2 = (NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = __this->____serializationConcurrencyLevel;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		int32_t L_5 = __this->____serializationConcurrencyLevel;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_3 = L_6;
		V_4 = 0;
		goto IL_003f;
	}

IL_0030:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_3;
		int32_t L_8 = V_4;
		RuntimeObject* L_9 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003f:
	{
		int32_t L_11 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0030;
		}
	}
	{
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_14 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_17 = (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		((  void (*) (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*, NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_17, L_14, L_15, L_16, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____tables = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_17);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_0;
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59)))(__this, (RuntimeObject*)L_18, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59));
		__this->____serializationArray = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__cctor_m96B4F76D0E9460939A672A025F840C82BA15A116_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 60)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 60));
		((ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))->___s_isValueWriteAtomic = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2__ctor_m6B5A16742229012703DE4792966758F53BD8D768_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____lock = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lock), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_1 = (EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8*)(EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8*)SZArrayNew(EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		__this->___data = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)L_1);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_2 = __this->___data;
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		GC_register_ephemeron_array_m7798D3C75D2E2DC50CAA2422C2B36656D7793D18(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Finalize_mEDFB93F6FABE2D6B6DCC9B0E9CBAB241AC693211_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0002:
			{
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}
		});
		try
		{
			goto IL_0009;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0009:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_RehashWithoutResize_m016B51E55C242F8FBCAF10DA8825E4B07B46FACC_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_0 = __this->___data;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_2 = __this->___data;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___key;
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_5 = ((GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields*)il2cpp_codegen_static_fields_for(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var))->___EPHEMERON_TOMBSTONE;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)L_5))))
		{
			goto IL_0037;
		}
	}
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_6 = __this->___data;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___key = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___key), (void*)NULL);
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000d;
		}
	}
	{
		V_2 = 0;
		goto IL_010c;
	}

IL_0046:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_11 = __this->___data;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		RuntimeObject* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___key;
		V_3 = L_13;
		RuntimeObject* L_14 = V_3;
		if (!L_14)
		{
			goto IL_0108;
		}
	}
	{
		RuntimeObject* L_15 = V_3;
		int32_t L_16;
		L_16 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B(L_15, NULL);
		int32_t L_17 = V_0;
		V_4 = ((int32_t)(((int32_t)(L_16&((int32_t)2147483647LL)))%L_17));
	}

IL_006e:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_18 = __this->___data;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		RuntimeObject* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___key;
		if (L_20)
		{
			goto IL_00de;
		}
	}
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_21 = __this->___data;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		RuntimeObject* L_23 = V_3;
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___key = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___key), (void*)L_23);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_24 = __this->___data;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_26 = __this->___data;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		RuntimeObject* L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value), (void*)L_28);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_29 = __this->___data;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___key = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___key), (void*)NULL);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_31 = __this->___data;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)NULL);
		goto IL_0108;
	}

IL_00de:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_33 = __this->___data;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		RuntimeObject* L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___key;
		RuntimeObject* L_36 = V_3;
		if ((((RuntimeObject*)(RuntimeObject*)L_35) == ((RuntimeObject*)(RuntimeObject*)L_36)))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_37 = V_4;
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		V_4 = L_38;
		int32_t L_39 = V_0;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
		{
			goto IL_006e;
		}
	}
	{
		V_4 = 0;
		goto IL_006e;
	}

IL_0108:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_010c:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_RecomputeSize_mECDE2A17589E6F9500A83C0BD216672E9E829463_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__this->___size = 0;
		V_0 = 0;
		goto IL_0030;
	}

IL_000b:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_0 = __this->___data;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___key;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_002c:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_6 = __this->___data;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Rehash_mE974FC607D3B12E845F0E83D2BB55A7F1F3639F6_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	uint32_t V_0 = 0;
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	{
		ConditionalWeakTable_2_RecomputeSize_mECDE2A17589E6F9500A83C0BD216672E9E829463(__this, NULL);
		int32_t L_0 = __this->___size;
		float L_1 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_0,NULL));
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,float,float,false,false>(((float)(L_1/(0.699999988f))),NULL));
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(((int32_t)(((int32_t)(L_2<<1))|1)), NULL);
		V_0 = L_3;
		uint32_t L_4 = V_0;
		double L_5 = (il2cpp_codegen_conv<double,uint32_t,int32_t,false,true>(L_4,NULL));
		float L_6 = (il2cpp_codegen_conv<float,double,double,false,false>(L_5,NULL));
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_7 = __this->___data;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		float L_9 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_8,NULL));
		if ((!(((float)L_6) > ((float)((float)il2cpp_codegen_multiply(L_9, (0.5f)))))))
		{
			goto IL_004d;
		}
	}
	{
		uint32_t L_10 = V_0;
		double L_11 = (il2cpp_codegen_conv<double,uint32_t,int32_t,false,true>(L_10,NULL));
		float L_12 = (il2cpp_codegen_conv<float,double,double,false,false>(L_11,NULL));
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_13 = __this->___data;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		float L_15 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_14,NULL));
		if ((!(((float)L_12) < ((float)((float)il2cpp_codegen_multiply(L_15, (1.10000002f)))))))
		{
			goto IL_004d;
		}
	}
	{
		ConditionalWeakTable_2_RehashWithoutResize_m016B51E55C242F8FBCAF10DA8825E4B07B46FACC(__this, NULL);
		return;
	}

IL_004d:
	{
		uint32_t L_16 = V_0;
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_17 = (EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8*)(EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8*)SZArrayNew(EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_1 = L_17;
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_18 = V_1;
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		GC_register_ephemeron_array_m7798D3C75D2E2DC50CAA2422C2B36656D7793D18(L_18, NULL);
		__this->___size = 0;
		V_2 = 0;
		goto IL_011c;
	}

IL_0068:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_19 = __this->___data;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		RuntimeObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___key;
		V_3 = L_21;
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_22 = __this->___data;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		RuntimeObject* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___value;
		V_4 = L_24;
		RuntimeObject* L_25 = V_3;
		if (!L_25)
		{
			goto IL_0118;
		}
	}
	{
		RuntimeObject* L_26 = V_3;
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_27 = ((GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields*)il2cpp_codegen_static_fields_for(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var))->___EPHEMERON_TOMBSTONE;
		if ((((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_27)))
		{
			goto IL_0118;
		}
	}
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
		V_5 = L_29;
		V_8 = (-1);
		RuntimeObject* L_30 = V_3;
		int32_t L_31;
		L_31 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B(L_30, NULL);
		int32_t L_32 = V_5;
		int32_t L_33 = ((int32_t)(((int32_t)(L_31&((int32_t)2147483647LL)))%L_32));
		V_7 = L_33;
		V_6 = L_33;
	}

IL_00b7:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_34 = V_1;
		int32_t L_35 = V_6;
		NullCheck(L_34);
		RuntimeObject* L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___key;
		V_9 = L_36;
		RuntimeObject* L_37 = V_9;
		if (!L_37)
		{
			goto IL_00d3;
		}
	}
	{
		RuntimeObject* L_38 = V_9;
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_39 = ((GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields*)il2cpp_codegen_static_fields_for(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var))->___EPHEMERON_TOMBSTONE;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_38) == ((RuntimeObject*)(RuntimeObject*)L_39))))
		{
			goto IL_00d9;
		}
	}

IL_00d3:
	{
		int32_t L_40 = V_6;
		V_8 = L_40;
		goto IL_00ed;
	}

IL_00d9:
	{
		int32_t L_41 = V_6;
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		V_6 = L_42;
		int32_t L_43 = V_5;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_00e7;
		}
	}
	{
		V_6 = 0;
	}

IL_00e7:
	{
		int32_t L_44 = V_6;
		int32_t L_45 = V_7;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_00b7;
		}
	}

IL_00ed:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_46 = V_1;
		int32_t L_47 = V_8;
		NullCheck(L_46);
		RuntimeObject* L_48 = V_3;
		((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key), (void*)L_48);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_49 = V_1;
		int32_t L_50 = V_8;
		NullCheck(L_49);
		RuntimeObject* L_51 = V_4;
		((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___value = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___value), (void*)L_51);
		int32_t L_52 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0118:
	{
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_011c:
	{
		int32_t L_54 = V_2;
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_55 = __this->___data;
		NullCheck(L_55);
		int32_t L_56 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_55)->max_length),NULL));
		if ((((int32_t)L_54) < ((int32_t)L_56)))
		{
			goto IL_0068;
		}
	}
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_57 = V_1;
		__this->___data = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)L_57);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE1D2E11D58177AC5AC7C4A993B5BE6408F97DAA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0018:
	{
		RuntimeObject* L_2 = __this->____lock;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0107:
			{
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0110;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_0110:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
				int32_t L_6 = __this->___size;
				float L_7 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_6,NULL));
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_8 = __this->___data;
				NullCheck(L_8);
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				float L_10 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_9,NULL));
				if ((!(((float)L_7) >= ((float)((float)il2cpp_codegen_multiply(L_10, (0.699999988f)))))))
				{
					goto IL_0047_1;
				}
			}
			{
				ConditionalWeakTable_2_Rehash_mE974FC607D3B12E845F0E83D2BB55A7F1F3639F6(__this, NULL);
			}

IL_0047_1:
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_11 = __this->___data;
				NullCheck(L_11);
				int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
				V_2 = L_12;
				V_5 = (-1);
				Il2CppSharedGenericObject* L_13 = ___0_key;
				int32_t L_14;
				L_14 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B((RuntimeObject*)L_13, NULL);
				int32_t L_15 = V_2;
				int32_t L_16 = ((int32_t)(((int32_t)(L_14&((int32_t)2147483647LL)))%L_15));
				V_4 = L_16;
				V_3 = L_16;
			}

IL_006a_1:
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_17 = __this->___data;
				int32_t L_18 = V_3;
				NullCheck(L_17);
				RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
				V_6 = L_19;
				RuntimeObject* L_20 = V_6;
				if (L_20)
				{
					goto IL_008b_1;
				}
			}
			{
				int32_t L_21 = V_5;
				if ((!(((uint32_t)L_21) == ((uint32_t)(-1)))))
				{
					goto IL_00c7_1;
				}
			}
			{
				int32_t L_22 = V_3;
				V_5 = L_22;
				goto IL_00c7_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_23 = V_6;
				CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				RuntimeObject* L_24 = ((GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields*)il2cpp_codegen_static_fields_for(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var))->___EPHEMERON_TOMBSTONE;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_23) == ((RuntimeObject*)(RuntimeObject*)L_24))))
				{
					goto IL_009e_1;
				}
			}
			{
				int32_t L_25 = V_5;
				if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
				{
					goto IL_009e_1;
				}
			}
			{
				int32_t L_26 = V_3;
				V_5 = L_26;
				goto IL_00b8_1;
			}

IL_009e_1:
			{
				RuntimeObject* L_27 = V_6;
				Il2CppSharedGenericObject* L_28 = ___0_key;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_27) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_28))))
				{
					goto IL_00b8_1;
				}
			}
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AA2E732DB2949176A84E755559B51D778BADC01)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
			}

IL_00b8_1:
			{
				int32_t L_30 = V_3;
				int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
				V_3 = L_31;
				int32_t L_32 = V_2;
				if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
				{
					goto IL_00c2_1;
				}
			}
			{
				V_3 = 0;
			}

IL_00c2_1:
			{
				int32_t L_33 = V_3;
				int32_t L_34 = V_4;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_006a_1;
				}
			}

IL_00c7_1:
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_35 = __this->___data;
				int32_t L_36 = V_5;
				NullCheck(L_35);
				Il2CppSharedGenericObject* L_37 = ___0_key;
				((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___key = (RuntimeObject*)L_37;
				Il2CppCodeGenWriteBarrier((void**)(&((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___key), (void*)(RuntimeObject*)L_37);
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_38 = __this->___data;
				int32_t L_39 = V_5;
				NullCheck(L_38);
				Il2CppSharedGenericObject* L_40 = ___1_value;
				((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___value = (RuntimeObject*)L_40;
				Il2CppCodeGenWriteBarrier((void**)(&((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___value), (void*)(RuntimeObject*)L_40);
				int32_t L_41 = __this->___size;
				__this->___size = ((int32_t)il2cpp_codegen_add(L_41, 1));
				goto IL_0111;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0111:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE1D2E11D58177AC5AC7C4A993B5BE6408F97DAA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0018:
	{
		RuntimeObject* L_2 = __this->____lock;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00aa:
			{
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_00b3;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_00b3:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_6 = __this->___data;
				NullCheck(L_6);
				int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
				V_2 = L_7;
				Il2CppSharedGenericObject* L_8 = ___0_key;
				int32_t L_9;
				L_9 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B((RuntimeObject*)L_8, NULL);
				int32_t L_10 = V_2;
				int32_t L_11 = ((int32_t)(((int32_t)(L_9&((int32_t)2147483647LL)))%L_10));
				V_4 = L_11;
				V_3 = L_11;
			}

IL_0049_1:
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_12 = __this->___data;
				int32_t L_13 = V_3;
				NullCheck(L_12);
				RuntimeObject* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___key;
				V_5 = L_14;
				RuntimeObject* L_15 = V_5;
				Il2CppSharedGenericObject* L_16 = ___0_key;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_15) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_16))))
				{
					goto IL_0093_1;
				}
			}
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_17 = __this->___data;
				int32_t L_18 = V_3;
				NullCheck(L_17);
				CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				RuntimeObject* L_19 = ((GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields*)il2cpp_codegen_static_fields_for(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var))->___EPHEMERON_TOMBSTONE;
				((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key), (void*)L_19);
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_20 = __this->___data;
				int32_t L_21 = V_3;
				NullCheck(L_20);
				((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value), (void*)NULL);
				V_6 = (bool)1;
				goto IL_00b6;
			}

IL_0093_1:
			{
				RuntimeObject* L_22 = V_5;
				if (L_22)
				{
					goto IL_0099_1;
				}
			}
			{
				goto IL_00b4;
			}

IL_0099_1:
			{
				int32_t L_23 = V_3;
				int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
				V_3 = L_24;
				int32_t L_25 = V_2;
				if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
				{
					goto IL_00a3_1;
				}
			}
			{
				V_3 = 0;
			}

IL_00a3_1:
			{
				int32_t L_26 = V_3;
				int32_t L_27 = V_4;
				if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_00b4;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b4:
	{
		return (bool)0;
	}

IL_00b6:
	{
		bool L_28 = V_6;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE1D2E11D58177AC5AC7C4A993B5BE6408F97DAA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0018:
	{
		Il2CppSharedGenericObject** L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		RuntimeObject* L_3 = __this->____lock;
		V_0 = L_3;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a5:
			{
				{
					bool L_4 = V_1;
					if (!L_4)
					{
						goto IL_00ae;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_00ae:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_6 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_1), NULL);
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_7 = __this->___data;
				NullCheck(L_7);
				int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
				V_2 = L_8;
				Il2CppSharedGenericObject* L_9 = ___0_key;
				int32_t L_10;
				L_10 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B((RuntimeObject*)L_9, NULL);
				int32_t L_11 = V_2;
				int32_t L_12 = ((int32_t)(((int32_t)(L_10&((int32_t)2147483647LL)))%L_11));
				V_4 = L_12;
				V_3 = L_12;
			}

IL_0050_1:
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_13 = __this->___data;
				int32_t L_14 = V_3;
				NullCheck(L_13);
				RuntimeObject* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___key;
				V_5 = L_15;
				RuntimeObject* L_16 = V_5;
				Il2CppSharedGenericObject* L_17 = ___0_key;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_16) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_17))))
				{
					goto IL_008e_1;
				}
			}
			{
				Il2CppSharedGenericObject** L_18 = ___1_value;
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_19 = __this->___data;
				int32_t L_20 = V_3;
				NullCheck(L_19);
				RuntimeObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
				*(Il2CppSharedGenericObject**)L_18 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_21, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)));
				Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_18, (void*)((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_21, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3))));
				V_6 = (bool)1;
				goto IL_00b1;
			}

IL_008e_1:
			{
				RuntimeObject* L_22 = V_5;
				if (L_22)
				{
					goto IL_0094_1;
				}
			}
			{
				goto IL_00af;
			}

IL_0094_1:
			{
				int32_t L_23 = V_3;
				int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
				V_3 = L_24;
				int32_t L_25 = V_2;
				if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
				{
					goto IL_009e_1;
				}
			}
			{
				V_3 = 0;
			}

IL_009e_1:
			{
				int32_t L_26 = V_3;
				int32_t L_27 = V_4;
				if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_00af;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		return (bool)0;
	}

IL_00b1:
	{
		bool L_28 = V_6;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ConditionalWeakTable_2_GetValue_m28C73BB07A49B531FDA4C156567FDF5768F63DA8_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* ___1_createValueCallback, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	Il2CppSharedGenericObject* V_3 = NULL;
	{
		CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* L_0 = ___1_createValueCallback;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE87639B3A491E0E26BF98722E7EF266338FFC27)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B752FEA6C79E292F7975C9C7E92D2B4616F6B66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____lock;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_5 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_2), NULL);
				Il2CppSharedGenericObject* L_6 = ___0_key;
				bool L_7;
				L_7 = ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2(__this, L_6, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
				if (!L_7)
				{
					goto IL_0033_1;
				}
			}
			{
				Il2CppSharedGenericObject* L_8 = V_0;
				V_3 = L_8;
				goto IL_0051;
			}

IL_0033_1:
			{
				CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* L_9 = ___1_createValueCallback;
				Il2CppSharedGenericObject* L_10 = ___0_key;
				NullCheck(L_9);
				Il2CppSharedGenericObject* L_11;
				L_11 = CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_inline(L_9, L_10, NULL);
				V_0 = L_11;
				Il2CppSharedGenericObject* L_12 = ___0_key;
				Il2CppSharedGenericObject* L_13 = V_0;
				ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0(__this, L_12, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
				goto IL_004f;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		Il2CppSharedGenericObject* L_14 = V_0;
		return L_14;
	}

IL_0051:
	{
		Il2CppSharedGenericObject* L_15 = V_3;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConditionalWeakTable_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE505D82253CA05FE57ADDD3ABD01769448BFEF33_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____lock;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = __this->___size;
				if (!L_4)
				{
					goto IL_0023_1;
				}
			}
			{
				Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF* L_5 = (Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
				Enumerator__ctor_m030A122C25684BFEAB8B9214E9E281FF990638F2(L_5, __this, NULL);
				V_2 = (RuntimeObject*)L_5;
				RuntimeObject* L_6 = V_2;
				G_B4_0 = L_6;
				goto IL_002d_1;
			}

IL_0023_1:
			{
				KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_7;
				L_7 = Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
				NullCheck((RuntimeObject*)L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), (RuntimeObject*)L_7);
				G_B4_0 = L_8;
			}

IL_002d_1:
			{
				V_2 = G_B4_0;
				goto IL_003a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConditionalWeakTable_2_System_Collections_IEnumerable_GetEnumerator_mE8424BD72A0EBAFEC99805EB1B9ABB83D66E0B0D_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((RuntimeObject*)__this);
		RuntimeObject* L_0;
		L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), (RuntimeObject*)__this);
		return (RuntimeObject*)L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_mCF681CB4825E085E3ED42B9E990609C36F282536_fshared (ConfiguredTaskAwaitable_1_t7FFB03EADF9A67E9EE2A5DECE3FB4353344FE922* __this, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___0_task, bool ___1_continueOnCapturedContext, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = ___0_task;
		bool L_1 = ___1_continueOnCapturedContext;
		ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A L_2;
		memset((&L_2), 0, sizeof(L_2));
		ConfiguredTaskAwaiter__ctor_m5B53A410AE8900B3D565ED7C7FE9DAB92B2ECEC9((&L_2), L_0, L_1, NULL);
		__this->___m_configuredTaskAwaiter = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_configuredTaskAwaiter))->___m_task), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A ConfiguredTaskAwaitable_1_GetAwaiter_mA5D8A0E225B9D580F1FC5216C47A0B828B033390_fshared (ConfiguredTaskAwaitable_1_t7FFB03EADF9A67E9EE2A5DECE3FB4353344FE922* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A L_0 = __this->___m_configuredTaskAwaiter;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_GetResult_mA0D0419EF40E9DF864B87B495FFE05C08475C00B (ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0 = __this->___m_task;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751(L_0, NULL);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_1 = __this->___m_task;
		NullCheck(L_1);
		bool L_2;
		L_2 = Task_1_get_ResultOnSuccess_m15F655DF9F8EE6F8388A9432454900F07EFC57BB_inline(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_0 = __this->___m_task;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751(L_0, NULL);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1 = __this->___m_task;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Task_1_get_ResultOnSuccess_mF098AC108FFA2E0D992306C6D956BA37874FAC77_inline(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ConfiguredTaskAwaiter_GetResult_m916ADADCB83D00E93327439DF6E90E45D1919574 (ConfiguredTaskAwaiter_t10F0057B7F31913C37CBB3E2900A547A6C29CD6A* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_0 = __this->___m_task;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751(L_0, NULL);
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_1 = __this->___m_task;
		NullCheck(L_1);
		VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC L_2;
		L_2 = Task_1_get_ResultOnSuccess_mF2B4314A2FC0448358439C96FC6217501A2ACFE0_inline(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ConfiguredTaskAwaiter_GetResult_m42785B19DDBEFB37E19238577030C0AFBFE36DE5_gshared (ConfiguredTaskAwaiter_tB493FE87234355650C78E0470CA13DDB7723BC9E* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* L_0 = __this->___m_task;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_0, NULL);
		Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* L_1 = __this->___m_task;
		NullCheck(L_1);
		Il2CppSharedGenericObject* L_2;
		L_2 = Task_1_get_ResultOnSuccess_mBB7F2275D4EF61A83D08373AA0D41ACC31AF73BD_inline(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter__ctor_m5B53A410AE8900B3D565ED7C7FE9DAB92B2ECEC9_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___0_task, bool ___1_continueOnCapturedContext, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = ___0_task;
		__this->___m_task = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_0);
		bool L_1 = ___1_continueOnCapturedContext;
		__this->___m_continueOnCapturedContext = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mAEF99891A1B576254827D55C54C6E0E1787AA7EF_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = __this->___m_task;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = __this->___m_task;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_continuation;
		bool L_2 = __this->___m_continueOnCapturedContext;
		TaskAwaiter_OnCompletedInternal_m8017DEDF7A41F58AFB178F31D417F47D3F83D5D4((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_0, L_1, L_2, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A>(__this);
	ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66(_thisAdjusted, ___0_continuation, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m14D32632322F465B16F5EB858BFE5886B7217701_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t1D607D10F13D62BB25C2A0394C5E034AC2ADAD2E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t1D607D10F13D62BB25C2A0394C5E034AC2ADAD2E);
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = __this->___m_task;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_0, NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1 = __this->___m_task;
		NullCheck(L_1);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TResult_t1D607D10F13D62BB25C2A0394C5E034AC2ADAD2E);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_m6AC601790CBA05AA79669611421A69A763F35DAD_fshared (Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)((RuntimeMethod*)(__this->___method))->invoker_method;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_closed_static;
		}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_generic_interface;
					else
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_generic_virtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_interface;
					else
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_virtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_inst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
				__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
			else
				__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)((RuntimeMethod*)(__this->___method))->invoker_method;
		}
	}
	__this->___extra_arg = (intptr_t)il2cpp_codegen_delegate_invoke_multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_fshared (Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	void* args[2];
	args[1] = ___0_input;
	((InvokerMethod)(__this->___invoke_impl))((Il2CppMethodPointer)__this->___method_ptr, (const MethodInfo*)__this->___method, (RuntimeObject*)__this->___method_code, args+1, il2cppRetVal);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_Multicast(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	Il2CppSharedGenericObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* currentDelegate = reinterpret_cast<CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B*>(delegatesToInvoke[i]);
		typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_key, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenInstance(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	NullCheck(___0_key);
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_key, method);
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenStatic(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_key, method);
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenVirtual(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	NullCheck(___0_key);
	return VirtualFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_key);
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenInterface(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	NullCheck(___0_key);
	return InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_key);
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenGenericVirtual(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	NullCheck(___0_key);
	return GenericVirtualFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(method, ___0_key);
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenGenericInterface(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	NullCheck(___0_key);
	return GenericInterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(method, ___0_key);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateValueCallback__ctor_m31A67241B18CF8DCDC707129B017A5458946B835_gshared (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenInstance;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
				__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
			else
				__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	__this->___extra_arg = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_gshared (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_key, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultComparer_1_Equals_m932C7E5983A88ECDE11621D497AE4D6A8EC8947D_gshared (DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_1 = ___0_x;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_2);
		V_0 = (RuntimeObject*)L_3;
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6 = ___1_y;
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_5, L_6);
		return L_7;
	}

IL_0029:
	{
		int32_t L_8 = ___0_x;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_9);
		int32_t L_11 = ___1_y;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_12);
		bool L_14;
		L_14 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B((int32_t*)UnBox(L_10), L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_GetHashCode_m39D56BEB0A3AF033927A44C576DB7B527DA49089_gshared (DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_obj;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_1);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)UnBox(L_2), NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultComparer_1_Equals_m38EFDD8C102634417E24C322106E302D76D92AF2_fshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_11 = L_0;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_0012:
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_6 = il2cpp_codegen_isinst_runtime(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_5);;
		V_0 = (RuntimeObject*)L_6;
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		NullCheck(L_8);
		bool L_10;
		L_10 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_9: *(void**)L_9));
		return L_10;
	}

IL_0029:
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_11);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_13);
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_12, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_GetHashCode_m763329D490F675E16A666B61F387D5F323EEC697_fshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_obj : &___0_obj), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_fshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___U3CNativeInvocationContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___U3CNativeDelegateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D DelegateWithContext_1_get_ProfilerMarker_mBF3099F0BFCF4E9A3C86FB470181C0010F3B277F_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	{
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_0 = __this->___U3CProfilerMarkerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateWithContext_1__ctor_m8E934A2E85F3CEA8D27A1C152A9954E991BCF743_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, intptr_t ___0_nativeInvocationContext, Il2CppSharedGenericObject* ___1_nativeDelegate, String_t* ___2_subsystemIdentifier, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		intptr_t L_0 = ___0_nativeInvocationContext;
		__this->___U3CNativeInvocationContextU3Ek__BackingField = L_0;
		Il2CppSharedGenericObject* L_1 = ___1_nativeDelegate;
		__this->___U3CNativeDelegateU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativeDelegateU3Ek__BackingField), (void*)L_1);
		String_t* L_2 = ___2_subsystemIdentifier;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mA98362A704FE2F8F5C21AD1309E7EA80EAA5F81D((&L_3), L_2, NULL);
		__this->___U3CProfilerMarkerU3Ek__BackingField = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateWithContext_1_Equals_m55BF967C5A03909EF792F10763786DF4D5D573CC_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)));
		DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* L_2 = V_0;
		bool L_3;
		L_3 = DelegateWithContext_1_Equals_mADB622927C9751B007215E254AF4B8F45A121989(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateWithContext_1_Equals_mADB622927C9751B007215E254AF4B8F45A121989_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* ___0_other, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_inline(__this, NULL);
		V_0 = L_0;
		DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* L_1 = ___0_other;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_inline(L_1, NULL);
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_3);
		bool L_5;
		L_5 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_6;
		L_6 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		Il2CppSharedGenericObject* L_7;
		L_7 = DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_inline(__this, NULL);
		DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* L_8 = ___0_other;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_9;
		L_9 = DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_inline(L_8, NULL);
		NullCheck(L_6);
		bool L_10;
		L_10 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_6, L_7, L_9);
		return L_10;
	}

IL_0032:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelegateWithContext_1_GetHashCode_mBC09D2258CF5E732B86DAC43FC843F8FB4B2D614_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_StaticInit);
	{
		intptr_t L_0;
		L_0 = DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_inline(__this, NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_inline(__this, NULL);
		CHECKED_LOCAL_INIT(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_StaticInit,(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_2;
		L_2 = HashCode_Combine_TisIntPtr_t_TisIl2CppSharedGenericObject_m0FE3DF8C5942D8532F80288C02A8FD80B7C6F1A1(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DelegateWithContext_1_get_NativeInvocationContext_mFF044FD9105CAF884AFA10DE411B92EB6D81EBB4_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *(intptr_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateWithContext_1_get_NativeDelegate_mF260DF8419B4674B384E63110B74A9F689BD4DA7_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D DelegateWithContext_1_get_ProfilerMarker_m1A407605AFB1FD29C04C36C7D48420F4304AC333_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, const RuntimeMethod* method) 
{
	{
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_0 = *(ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateWithContext_1__ctor_mC48F940386BB25AB3B52B885CA76B9BC5F21EC6D_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, intptr_t ___0_nativeInvocationContext, Il2CppFullySharedGenericAny ___1_nativeDelegate, String_t* ___2_subsystemIdentifier, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		intptr_t L_0 = ___0_nativeInvocationContext;
		il2cpp_codegen_write_field_data<intptr_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_nativeDelegate : &___1_nativeDelegate), SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_1, SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
		String_t* L_2 = ___2_subsystemIdentifier;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mA98362A704FE2F8F5C21AD1309E7EA80EAA5F81D((&L_3), L_2, NULL);
		il2cpp_codegen_write_field_data<ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateWithContext_1_Equals_mB7E2A8961D41C63B4EAA05DCE4F04B3A01BAF9B9_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)));
		DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* L_2 = V_0;
		bool L_3;
		L_3 = ((  bool (*) (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*, DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateWithContext_1_Equals_m94E31921ECCBD39A38427607374E081461FA6D7E_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = ((  intptr_t (*) (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		V_0 = L_0;
		DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* L_1 = ___0_other;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = ((  intptr_t (*) (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_3);
		bool L_5;
		L_5 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
		L_6 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), __this, (Il2CppFullySharedGenericAny*)L_7);
		DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* L_8 = ___0_other;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), L_8, (Il2CppFullySharedGenericAny*)L_9);
		NullCheck(L_6);
		bool L_10;
		L_10 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_9: *(void**)L_9));
		return L_10;
	}

IL_0032:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelegateWithContext_1_GetHashCode_m76A574C0D5DFEAA63C55FE0A671E1B0A77BD0562_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_StaticInit);
	const uint32_t SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
	{
		intptr_t L_0;
		L_0 = ((  intptr_t (*) (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), __this, (Il2CppFullySharedGenericAny*)L_1);
		CHECKED_LOCAL_INIT(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_StaticInit,(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_2;
		L_2 = InvokerFuncInvoker2< int32_t, intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mAD88826314DD95640977D3B87E43E0FA23090A6D_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* L_0 = ___0_dictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_mDB3A971D9A28F20B00A5510D9B2DECEB3B76DEE5_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0);
		V_0 = L_1;
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&V_0), NULL);
		RuntimeObject* L_3 = __this->____enumerator;
		NullCheck(L_3);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_4;
		L_4 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_3);
		V_0 = L_4;
		Il2CppSharedGenericObject* L_5;
		L_5 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&V_0), NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), (RuntimeObject*)L_2, (RuntimeObject*)L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m3A564BB301B6B57E73953208E0B50012C1FE281D_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0);
		V_0 = L_1;
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&V_0), NULL);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m2D83E41A19C3A06C28AEE6B645BCC8CB47856016_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0);
		V_0 = L_1;
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&V_0), NULL);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_mD70DDFA0FDABCEBD65CB53488F7A94CB21742855_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = DictionaryEnumerator_get_Entry_mDB3A971D9A28F20B00A5510D9B2DECEB3B76DEE5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mE63FC46E53E46535C7DD59172E65E42BD570D5F3_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_0 = ___0_dictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m6EB9062A7B59C89B18B6B61214B707BE4AA44086_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_2);
		RuntimeObject* L_4 = __this->____enumerator;
		NullCheck(L_4);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m0990C99F94EA95C5392CA5485B4BFD344BAED6FE_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_mD790494FF5E50257030CC045B516A70513EE98A8_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m84A050320869FF83584304FF56D3BA05368095F2_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mCD670B5AE8886409051790844BF74853977F5846_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mBAC7702D03B6B7A6496AA713EC06CE6162127B2C_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDAE28766991DA90CA0182FEB3630C356F0D3A58A_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D07BFF09CD0A13D048507C8478F869D9B7DA954_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE29A61FA622B0B4CC65A83F2ABAF19B40D6D9539_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_5;
		L_5 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m55E1072B6FFDBB2DA0795FB824559888AADB831D_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mE4B120CEAC8B3FB8164A6B8421DB9482654758F3(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE4B120CEAC8B3FB8164A6B8421DB9482654758F3_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* G_B2_0 = NULL;
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* L_9 = ((Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_30;
				L_30 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline((&V_4), NULL);
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline((&V_4), NULL);
				Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* Dictionary_2_get_Keys_m59EDFF48264F283729CF504D7ED40484240331EC_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* L_1 = (KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		KeyCollection__ctor_m28B3CAD60EA6848BE8C46114BD6E0C8FF936E72A(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* Dictionary_2_get_Values_mDEA6A43564B7A3B2B74ADB07370392714267B447_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* L_1 = (ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
		ValueCollection__ctor_mD531F2816B35D4869E5EB9CCD56794AD15649388(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_m23A5A07AE8C61F7DBA9F66FD4082B5647D271F61_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_6 = ___0_key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB372B26FF800DAB8A056AC36CEF56999C6B8C0B2_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m36A1726D1A64DBFB0EB4E109963BC1C38DA7C2DA_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0;
		L_0 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mCDA4ABDA01342BBEBFBF15C806D85D07A0FEE307_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0;
		L_0 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mEB4DBA68128DB3538B6D92415D213E3836A0DB00_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0;
		L_0 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_9;
		L_9 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m38590317DE74DBE8D92F2CBEF07EB2166FD77F8A(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3D9BEEAC0D4BEFD3F54006312EC7895EA1BD7A63_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m08A93A4677DE0106AF8187A341C674A783136F9E_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mE694E1EB3DC6921BA682AB491035440877A5024C(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m0D4121FAC5AC308F9F11677446270359EE7F187F((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF Dictionary_2_GetEnumerator_mE94C147615A97349C2423579A3A5D9B9CC3BD37A_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E((&L_0), __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mCCB91D0539BEA0FD63F7A0E7B337FAEBFB9825E1_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E((&L_0), __this, 2, NULL);
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m6A625FAB57C6DB605126EBCAF4F286C86EEA05CE_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_6;
		L_6 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mE694E1EB3DC6921BA682AB491035440877A5024C(__this, NULL);
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_15 = (KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F*)(KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_16 = V_0;
		Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_21;
		L_21 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_5 = (EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3*)(EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* V_10 = NULL;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_26;
		L_26 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_37 = ___0_key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_65 = ___0_key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mECA349A5C568918987B1E5F01CF437B826B24473(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_101 = V_10;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_102 = ___0_key;
		L_101->___key = L_102;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_101->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_101->___key))->___Item2), (void*)NULL);
		#endif
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCBBB6C49A72A1E855D48008CB4ECB7FBC97D70D6_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_21;
		L_21 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_24;
		L_24 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mECA349A5C568918987B1E5F01CF437B826B24473_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_3 = (EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3*)(EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_5 = __this->____entries;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* L_17 = (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7(L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m38590317DE74DBE8D92F2CBEF07EB2166FD77F8A_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_21;
		L_21 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_22 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_23 = L_22->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_26 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_27 = L_26->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_42 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* L_43 = (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
	}

IL_00ff:
	{
	}
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_44 = V_4;
		Il2CppSharedGenericObject** L_45 = (Il2CppSharedGenericObject**)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_0142:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2F8BE2685E916E74DF6889F2CFC623C4091315BD_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_21;
		L_21 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_22 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_23 = L_22->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_26 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_27 = L_26->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_45 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* L_46 = (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
	}

IL_010c:
	{
	}
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_47 = V_4;
		Il2CppSharedGenericObject** L_48 = (Il2CppSharedGenericObject**)(&L_47->___value);
		il2cpp_codegen_initobj(L_48, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_49 = V_3;
		__this->____freeList = L_49;
		int32_t L_50 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_51, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_52 = V_3;
		V_2 = L_52;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_53 = V_4;
		int32_t L_54 = L_53->___next;
		V_3 = L_54;
	}

IL_014f:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_56 = ___1_value;
		il2cpp_codegen_initobj(L_56, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m544B10FFDD54BB3DB13B9CEEFEF9C9A89B85A4DB_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m31A536EBEE4B544593F612F05A5CE8D8A9F8BBBF_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mC110421C30B569259BF43D5F07B7BA084EB04D18_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3331B0EDDA7E98A34425B81A329F50D136FFC044_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mE694E1EB3DC6921BA682AB491035440877A5024C(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m0D4121FAC5AC308F9F11677446270359EE7F187F((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m0E09940D27D94EDDCFF470810EC0D0A114E226D1_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E((&L_0), __this, 2, NULL);
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m6CC01D6F08A4B3391BCE3715088D08CB44B7FC0F_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m610E6007B2B296B398434104EAEB9F9F153AF5DB_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mB372B26FF800DAB8A056AC36CEF56999C6B8C0B2(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 50)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 51)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mC6F17349CADE66B7F72E1242F3A1ADA2CFBA6021_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E((&L_0), __this, 1, NULL);
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5C96FD77BE99497A7E54C6230E41959030E607A4_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1AF2FE90D9DD9D693B99B74CDC4935CA972ECD7C_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAE587446CB22990BE3D88C5276B4D8C4AB38E6C3_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_5;
		L_5 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0BBACC79A6257D56E9A512758BDAB39209B1352B_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mAD75EF58F66B595F8D3901C3452232FC94062088(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD75EF58F66B595F8D3901C3452232FC94062088_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* G_B2_0 = NULL;
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* L_9 = ((Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_30;
				L_30 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline((&V_4), NULL);
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline((&V_4), NULL);
				Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* Dictionary_2_get_Keys_mB891254A1B6A6791387BC11637DE57B8C898FE7C_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* L_1 = (KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		KeyCollection__ctor_mD5E79842FA5F42C6B3E458407CA711BDAAB1FE69(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* Dictionary_2_get_Values_m357BBB623B919A08A8CADA535288272258A9BEC4_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* L_1 = (ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
		ValueCollection__ctor_m7782EC432C8B7591F78A35C56024E8E21C78A345(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_m65968339FBA4115BF0BB1C10D8B6117085315C45_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_6 = ___0_key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m50080FF99F5F609F7C6D4A916D1A4264AB88BCC5_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30681F352B63FA36D2AE605D5DC58BFF543421BE_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0;
		L_0 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m78DB65587BADCAB9417C6D8BDC27071931CBED83_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0;
		L_0 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61AEF7D244D9C0A1F70618EE0F47ADF21CD291B4_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0;
		L_0 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_9;
		L_9 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m86A5B73912916A5825210A61600309B0CEBE7022(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mF1F5EAAC106826831EF6763729D6C06F730FCC77_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2AF961FE749C46EFD7FB3E2C8E75525BA2F4D434_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m889AEFA656A4A6AB38DC123246E8BEC33647F2BB(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mD0CA78640E4E9AEDF3F7B13285742812AD9D3F93((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF Dictionary_2_GetEnumerator_m54D4A1E66302F1BEBCFB8C0B2FC06A5C8813D490_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8((&L_0), __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m438F264A33351AD7D356691BB7136AE09C98CD6F_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8((&L_0), __this, 2, NULL);
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m8781D518EA932B0B78BD8C9C45C7632FA09FF54F_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_6;
		L_6 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m889AEFA656A4A6AB38DC123246E8BEC33647F2BB(__this, NULL);
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_15 = (KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A*)(KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_16 = V_0;
		Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_21;
		L_21 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_5 = (EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0*)(EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* V_10 = NULL;
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_26;
		L_26 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_37 = ___0_key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_65 = ___0_key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m2B49E5B27DE63B7B42984CEC07EAE9D3119B80F7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_101 = V_10;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_102 = ___0_key;
		L_101->___key = L_102;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_101->___key))->___Item1), (void*)NULL);
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mA752F2F2B61278E1E74F701743FB807C3966CAB3_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_21;
		L_21 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_24;
		L_24 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2B49E5B27DE63B7B42984CEC07EAE9D3119B80F7_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_3 = (EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0*)(EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_5 = __this->____entries;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* L_17 = (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404(L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m86A5B73912916A5825210A61600309B0CEBE7022_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_21;
		L_21 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_22 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_23 = L_22->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_26 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_27 = L_26->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_42 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* L_43 = (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
	}

IL_00ff:
	{
	}
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_44 = V_4;
		Il2CppSharedGenericObject** L_45 = (Il2CppSharedGenericObject**)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_0142:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2719CA011E1E8F2CBB92D0BE553FCE6970E9E63B_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_21;
		L_21 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_22 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_23 = L_22->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_26 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_27 = L_26->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_45 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* L_46 = (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
	}

IL_010c:
	{
	}
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_47 = V_4;
		Il2CppSharedGenericObject** L_48 = (Il2CppSharedGenericObject**)(&L_47->___value);
		il2cpp_codegen_initobj(L_48, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_49 = V_3;
		__this->____freeList = L_49;
		int32_t L_50 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_51, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_52 = V_3;
		V_2 = L_52;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_53 = V_4;
		int32_t L_54 = L_53->___next;
		V_3 = L_54;
	}

IL_014f:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_56 = ___1_value;
		il2cpp_codegen_initobj(L_56, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mDBE5311D34FDF95AF0D6ED8F04E8D7CFE23B6D23_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m401A4F54A243ABD0325F58FAC4555131C960419C_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m079F564A61DDEE2C2D4E633C8B7F2D9D51E20606_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mB8CADFD47399FA30DB86B69EF77618BB9E7206F5_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m889AEFA656A4A6AB38DC123246E8BEC33647F2BB(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mD0CA78640E4E9AEDF3F7B13285742812AD9D3F93((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m661C31792617A73375B49EF25DFAA3CD1997A3CB_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8((&L_0), __this, 2, NULL);
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m25588CDDB6FCE4088A12E4FA7A48812B8FA21589_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m078EF951722EFA64543A568CAEA122EBE0DEE3D7_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m50080FF99F5F609F7C6D4A916D1A4264AB88BCC5(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 50)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 51)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m90DAB44691EDFBA25E3E472018B053435DA7FCD0_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8((&L_0), __this, 1, NULL);
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAED8CDB89C85F3A8161EF7FEBFA27BBBBC1583C2_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m973EC7603C3FDE98E046A2C6554CA5FAC97BB1FF_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m064A8264F943DBBAC13C529623AB1904DF2B6399_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4DEA1B8CB215692D40CABFBD55CFBBB1F138FBFE_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mFE8D024D7FA568AAB39FCF6DAF344F43EE1F4A43(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFE8D024D7FA568AAB39FCF6DAF344F43EE1F4A43_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* G_B2_0 = NULL;
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* L_9 = ((Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Guid_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				Guid_t L_30;
				L_30 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline((&V_4), NULL);
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline((&V_4), NULL);
				Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* Dictionary_2_get_Keys_mFC9AADC3C1C00FBE73A7B0AC6F8BC262E2469703_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* L_1 = (KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		KeyCollection__ctor_m1DD9728163AEE8DECB0FD6CC40DDEB6E3B419E04(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* Dictionary_2_get_Values_m668F75FF60F59F3624BAB4938DA51B500B81D491_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* L_1 = (ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
		ValueCollection__ctor_m16305A7173A73FFD4F82FAC103C980A99266B7E2(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_mEA3BFFB2296A12A45164153B3D86B6DB928B7A93_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m93D471C69BDF1EE119D28B69BFACB3B4C6E1B9C5_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m0CBC134BCF5E1C9FB01257E2F3834A91F5F3CAC4_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4309834032BDE6E1B7ED6C2FB9AE7F13647BD967_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m7C32F0809AD3AFB57C16582AEC83B382EA3750F0_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m2BD0E6825D66721033A14ABB6F727A8D1C8E0628(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mAF7D6813B74981E1659BF29AEDEFBEF99CC34A62_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m551DC69C4B2FFF7E3AE8DC22086AE971FC3FC4B3_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m62CB7B656456CFDD5DC73F6ECAA5BAF24EFBA62C(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Guid_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mAADB86C56A6064707D6B414C20886941E280A8C8((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A Dictionary_2_GetEnumerator_mC56D8EEA1FC332C55A4D6F293A4790AFE1E7ECAB_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D((&L_0), __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27799B667A88624121FEA2ACDA3E6DCD84385244_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D((&L_0), __this, 2, NULL);
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mEA944741AD9C0C4D3F8EE5DF611D9B261AC5D003_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m62CB7B656456CFDD5DC73F6ECAA5BAF24EFBA62C(__this, NULL);
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_15 = (KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856*)(KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_16 = V_0;
		Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_21;
		L_21 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Guid_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Guid_t L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		Guid_t L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		Guid_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_5 = (EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3*)(EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_26;
		L_26 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Guid_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Guid_t L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_37 = ___0_key;
		Guid_t L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		Guid_t L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		Guid_t L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_65 = ___0_key;
		Guid_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m4B80FC5F8BA8BAE74E0EAB023D785DFDA03A7F6A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_101 = V_10;
		Guid_t L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m6A54BE936068A38475485E8D84EDC69AC6A008B9_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4B80FC5F8BA8BAE74E0EAB023D785DFDA03A7F6A_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_3 = (EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3*)(EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_5 = __this->____entries;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2BD0E6825D66721033A14ABB6F727A8D1C8E0628_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_21;
		L_21 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_22 = V_4;
		Guid_t L_23 = L_22->___key;
		Guid_t L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_26 = V_4;
		Guid_t L_27 = L_26->___key;
		Guid_t L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6CA8C95085FAB19088435E4FB24516A35AB75C3E_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_21;
		L_21 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_22 = V_4;
		Guid_t L_23 = L_22->___key;
		Guid_t L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_26 = V_4;
		Guid_t L_27 = L_26->___key;
		Guid_t L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m198483A968CEBE45C4EE5A7E372ECF0085087FEA_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mEAF6BFC11AD4EA79E3B5884F495CDD32FB9CF30F_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22E850641682AB81F24550AAFBBE396B1B7834F8_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mD44BA3E3AD85A0C5AC3BF8F778210F7D0D364EEE_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m62CB7B656456CFDD5DC73F6ECAA5BAF24EFBA62C(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Guid_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mAADB86C56A6064707D6B414C20886941E280A8C8((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4A4EA3A132E8979F3B81CAAF5F5BD81AA90C288D_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D((&L_0), __this, 2, NULL);
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m1D1600A35C5D3B2C1DA9E71568B4A447824E8A80_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mFF7478B8510DCF1152CDCD7A043627DE22F70B89_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m93D471C69BDF1EE119D28B69BFACB3B4C6E1B9C5(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 50)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 51)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mB37B2F2185806AEA57718E87FB357234B01C1440_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D((&L_0), __this, 1, NULL);
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m543A280CD3F7D7BB017BDEE2AAB95327542DD8A2_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m49575A3BC27C2DD83D288B3E374AA0B5BA4C6E4A(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m04FAE139B2E6332A3BEBBE73DA3016AB92D593E9_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m49575A3BC27C2DD83D288B3E374AA0B5BA4C6E4A(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF33FE1C0D1635189B57630DF027C7D1453CC71E1_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m49575A3BC27C2DD83D288B3E374AA0B5BA4C6E4A(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m49575A3BC27C2DD83D288B3E374AA0B5BA4C6E4A_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m8F58774799ABFD0AF88167500E453B5252FF5FBB(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m17A3BE1D07064DC39EF36F6AC49334E6C118634F_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m0DFAF670559B0FE516624A501EA61CB9B14B7B67(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0DFAF670559B0FE516624A501EA61CB9B14B7B67_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* G_B2_0 = NULL;
	Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m49575A3BC27C2DD83D288B3E374AA0B5BA4C6E4A(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* L_9 = ((Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_mB53657B4F779ED11B472769A9ABB51A093A4FF4B(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				int32_t L_30;
				L_30 = KeyValuePair_2_get_Key_mB0ED89FC7985F9676A84AF8FDFD3C6C53F478C90_inline((&V_4), NULL);
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_m03EB6ADF69217A5128CE44A71DAAA98C5D33B9FB_inline((&V_4), NULL);
				Dictionary_2_Add_mB53657B4F779ED11B472769A9ABB51A093A4FF4B(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8A3D2A8A2AEED2DCB735C110440CB590EE84367C* Dictionary_2_get_Keys_mB1A68E24DD56FC7B3FF43BCA487DCEE79C8916BA_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t8A3D2A8A2AEED2DCB735C110440CB590EE84367C* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t8A3D2A8A2AEED2DCB735C110440CB590EE84367C* L_1 = (KeyCollection_t8A3D2A8A2AEED2DCB735C110440CB590EE84367C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		KeyCollection__ctor_m574C0BEA657118596B91087FCD53CD5206AB8CE1(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t8A3D2A8A2AEED2DCB735C110440CB590EE84367C* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t20B4A413B40603707CB912BD61898CA43B3C28FF* Dictionary_2_get_Values_mE0B10BA7C459A85A1EE51D0C9A9145C5926D35ED_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t20B4A413B40603707CB912BD61898CA43B3C28FF* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t20B4A413B40603707CB912BD61898CA43B3C28FF* L_1 = (ValueCollection_t20B4A413B40603707CB912BD61898CA43B3C28FF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
		ValueCollection__ctor_mC5E41CEAC9927A0756C903DA9D06C533F76D1913(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t20B4A413B40603707CB912BD61898CA43B3C28FF* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_mFC61E83AC43E4FE37E2E32828FC29042E04D1EF6_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC1EBE3B129C084E57C8F969D8D71CF9087B8D698(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2BB6CF3A683DE145DB22935870F3C63F3E8E3027_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8357524D1C8961A4028BC1DC44FE9AD5A78A092F(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB53657B4F779ED11B472769A9ABB51A093A4FF4B_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8357524D1C8961A4028BC1DC44FE9AD5A78A092F(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mCCF5A70EDCB68305B5706C902A58F4BE4C08E3FC_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mB0ED89FC7985F9676A84AF8FDFD3C6C53F478C90_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m03EB6ADF69217A5128CE44A71DAAA98C5D33B9FB_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_mB53657B4F779ED11B472769A9ABB51A093A4FF4B(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m7E1B4E8161E2A838899D6FA7039B84754AE06518_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mB0ED89FC7985F9676A84AF8FDFD3C6C53F478C90_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC1EBE3B129C084E57C8F969D8D71CF9087B8D698(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m03EB6ADF69217A5128CE44A71DAAA98C5D33B9FB_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m67BB7DE87D0BCD87E77A44A9177D952D42996617_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mB0ED89FC7985F9676A84AF8FDFD3C6C53F478C90_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC1EBE3B129C084E57C8F969D8D71CF9087B8D698(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m03EB6ADF69217A5128CE44A71DAAA98C5D33B9FB_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_mB0ED89FC7985F9676A84AF8FDFD3C6C53F478C90_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m07FA12992B3DAD86BD9CD3797525EBC22BE69E15(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4A4E98C56B428A238653A5D58BD1E9AA00496B6C_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC1EBE3B129C084E57C8F969D8D71CF9087B8D698(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB33080F9C7360F65D9F081C33D51BB5EB95E14FA_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6079E76F44CA52BDA46A08AB89BC129EC1AFDACB_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mCE5BB990E0EB80EB89D6FDF8DB85AF06C991991B(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mB203F4B742D836457DDC26B3493454EC84369344((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1 Dictionary_2_GetEnumerator_mB7F3FCCB0B22E12D5CD0BF11D4255BC0679E534D_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m32006CB0E3F8700C09347A914C1881579BCFFC65((&L_0), __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEB1F75D535B6A7265EBEF5D7894847AD80744558_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m32006CB0E3F8700C09347A914C1881579BCFFC65((&L_0), __this, 2, NULL);
		Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m089CED61A675A0A4D2B5789DA01FE496A65E8793_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mCE5BB990E0EB80EB89D6FDF8DB85AF06C991991B(__this, NULL);
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_15 = (KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93*)(KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_16 = V_0;
		Dictionary_2_CopyTo_m6079E76F44CA52BDA46A08AB89BC129EC1AFDACB(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mC1EBE3B129C084E57C8F969D8D71CF9087B8D698_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_21;
		L_21 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		int32_t L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		int32_t L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8F58774799ABFD0AF88167500E453B5252FF5FBB_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_5 = (EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E*)(EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8357524D1C8961A4028BC1DC44FE9AD5A78A092F_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m8F58774799ABFD0AF88167500E453B5252FF5FBB(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_26;
		L_26 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		int32_t L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_37 = ___0_key;
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		int32_t L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		int32_t L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_65 = ___0_key;
		int32_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mFFD5EEA58232DF8B073F38D35C39D8CDCB6AD30D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_101 = V_10;
		int32_t L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mA756283C4F289957E8300CE81D110A10C00B8E83_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m8F58774799ABFD0AF88167500E453B5252FF5FBB(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_mB0ED89FC7985F9676A84AF8FDFD3C6C53F478C90_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_mB0ED89FC7985F9676A84AF8FDFD3C6C53F478C90_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m03EB6ADF69217A5128CE44A71DAAA98C5D33B9FB_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_mB53657B4F779ED11B472769A9ABB51A093A4FF4B(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFFD5EEA58232DF8B073F38D35C39D8CDCB6AD30D_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m82DAF2EEBEF35C89774A8E71F51F1BD13378620F(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m82DAF2EEBEF35C89774A8E71F51F1BD13378620F_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_3 = (EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E*)(EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_5 = __this->____entries;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m07FA12992B3DAD86BD9CD3797525EBC22BE69E15_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_21;
		L_21 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_22 = V_4;
		int32_t L_23 = L_22->___key;
		int32_t L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_26 = V_4;
		int32_t L_27 = L_26->___key;
		int32_t L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2398D9D9E0616477152747DF5B2A65875B7C79C9_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_21;
		L_21 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_22 = V_4;
		int32_t L_23 = L_22->___key;
		int32_t L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_26 = V_4;
		int32_t L_27 = L_26->___key;
		int32_t L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_t4D3FDFE59398F64D5B4FFA1D66084EBA0830B286* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE84CAE1C2C3C804992294A454700ECB3273CA55C_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC1EBE3B129C084E57C8F969D8D71CF9087B8D698(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m41A9C66611A558D8FC76DF8A5B6D85DEA64AB025_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8357524D1C8961A4028BC1DC44FE9AD5A78A092F(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4A5DBE42437FA7371B76904470CD39F967DD3597_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m6079E76F44CA52BDA46A08AB89BC129EC1AFDACB(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m741926593764B7FDC06CE3C25FA7064C90EDC465_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mCE5BB990E0EB80EB89D6FDF8DB85AF06C991991B(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m6079E76F44CA52BDA46A08AB89BC129EC1AFDACB(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mB203F4B742D836457DDC26B3493454EC84369344((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mE77D515B9401431AAC8D1465DF309C52F5E99EBC_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m32006CB0E3F8700C09347A914C1881579BCFFC65((&L_0), __this, 2, NULL);
		Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m4EF9E59B605525DFBC945C4CE685398110C68A49_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t6E6179EB5F900C355F0B5608A485AD28297C064E* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m8F58774799ABFD0AF88167500E453B5252FF5FBB(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m82DAF2EEBEF35C89774A8E71F51F1BD13378620F(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mA2465C7565752A3558A1088BD0A915470F4F310A_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m2BB6CF3A683DE145DB22935870F3C63F3E8E3027(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 50)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 51)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mB8EF6802830790335FE5CD8CE5E52941B5F22A4B_gshared (Dictionary_2_t36B17C1CDA9BE4EE8C94D25A0DC9A7F4C75D51D7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m32006CB0E3F8700C09347A914C1881579BCFFC65((&L_0), __this, 1, NULL);
		Enumerator_t81A2148DB17455F54BFD43D8DE4377EB070272D1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7305647D28844BDDE75B6B471741723FF2E50BE6 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m6818D2210BF5328DBDF7247EB90D4E145D266C9E(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCB497FA495BCCA1BF4D2D2ED00AC9449C48E41FD (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m6818D2210BF5328DBDF7247EB90D4E145D266C9E(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6D5E6A9F9FA4E1C873EB24004DF2038B8A2A1D9F (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m6818D2210BF5328DBDF7247EB90D4E145D266C9E(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6818D2210BF5328DBDF7247EB90D4E145D266C9E (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m5A7B3A4BD35EE33EF1D23EC63D0BF8C835146F95(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* L_5;
		L_5 = EqualityComparer_1_get_Default_m1382B31A95228129ADB9427B1EE639C76AB507FD_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE0912309537537B778BCC94033DB215F0704069B (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m5A86DD7196BAD4E82E1612063D35AA69A41AC127(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5A86DD7196BAD4E82E1612063D35AA69A41AC127 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* G_B2_0 = NULL;
	Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m6818D2210BF5328DBDF7247EB90D4E145D266C9E(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* L_9 = ((Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m283F367ACCC4A2031B27BDECBAD5371A37A3E136(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_30;
				L_30 = KeyValuePair_2_get_Key_m53238783BDA24C812C5D63BCE9F25FE73F867243_inline((&V_4), NULL);
				Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_31;
				L_31 = KeyValuePair_2_get_Value_mC76FA4AB276A8B74C6EFA434FC6F564522EB9710_inline((&V_4), NULL);
				Dictionary_2_Add_m283F367ACCC4A2031B27BDECBAD5371A37A3E136(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t302F3368F4549F8C5F276558FB4458F9388EDFA7* Dictionary_2_get_Keys_mFF4245F70DA617283AA7B8D03117E1CAA269C5E1 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t302F3368F4549F8C5F276558FB4458F9388EDFA7* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t302F3368F4549F8C5F276558FB4458F9388EDFA7* L_1 = (KeyCollection_t302F3368F4549F8C5F276558FB4458F9388EDFA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		KeyCollection__ctor_m02A1D71902F956CF8E4F3EBF6B393B3027059F88(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t302F3368F4549F8C5F276558FB4458F9388EDFA7* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t38496EABE25A048F0ED98E59AEDBB2FF22D81F98* Dictionary_2_get_Values_m0727B85637956A9354130DFF0667D7C530729E10 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t38496EABE25A048F0ED98E59AEDBB2FF22D81F98* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t38496EABE25A048F0ED98E59AEDBB2FF22D81F98* L_1 = (ValueCollection_t38496EABE25A048F0ED98E59AEDBB2FF22D81F98*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
		ValueCollection__ctor_m9F330FA04A0EDF48F556FA52CDB1C53E10AFC265(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t38496EABE25A048F0ED98E59AEDBB2FF22D81F98* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 Dictionary_2_get_Item_m9513953CE43D70DB671962908AD63D50F6FB3A99 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF6F7D3ED64E85D31556C2FB7C87162FA40C8B452(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_6 = ___0_key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8));
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2C8B19C423C5ADE5459015BE8B0361D2DA4D2AE2 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, const RuntimeMethod* method) 
{
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_0 = ___0_key;
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m37E8831114C391DE86E5265088822C77C8902039(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m283F367ACCC4A2031B27BDECBAD5371A37A3E136 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, const RuntimeMethod* method) 
{
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_0 = ___0_key;
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m37E8831114C391DE86E5265088822C77C8902039(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m95E70C66D6CF6AB57EAB7363F78AD154A60727D4 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_0;
		L_0 = KeyValuePair_2_get_Key_m53238783BDA24C812C5D63BCE9F25FE73F867243_inline((&___0_keyValuePair), NULL);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_1;
		L_1 = KeyValuePair_2_get_Value_mC76FA4AB276A8B74C6EFA434FC6F564522EB9710_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m283F367ACCC4A2031B27BDECBAD5371A37A3E136(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m899CD22D57C534C7BAD5DFDF8EA6839D60B8386E (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_0;
		L_0 = KeyValuePair_2_get_Key_m53238783BDA24C812C5D63BCE9F25FE73F867243_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF6F7D3ED64E85D31556C2FB7C87162FA40C8B452(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* L_3;
		L_3 = EqualityComparer_1_get_Default_m2B4F62EDB23031C609551EC3F4671100D30E9CEA_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_7;
		L_7 = KeyValuePair_2_get_Value_mC76FA4AB276A8B74C6EFA434FC6F564522EB9710_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mCDEE07D9FF2E4DBAE84119B1FDDC281923B983CF (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_0;
		L_0 = KeyValuePair_2_get_Key_m53238783BDA24C812C5D63BCE9F25FE73F867243_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF6F7D3ED64E85D31556C2FB7C87162FA40C8B452(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* L_3;
		L_3 = EqualityComparer_1_get_Default_m2B4F62EDB23031C609551EC3F4671100D30E9CEA_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_7;
		L_7 = KeyValuePair_2_get_Value_mC76FA4AB276A8B74C6EFA434FC6F564522EB9710_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_9;
		L_9 = KeyValuePair_2_get_Key_m53238783BDA24C812C5D63BCE9F25FE73F867243_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m242481DE2BE6F14286AAC901883DDBDCFF8A3FB0(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9A4F2B1DD00D9C57456C698E315114D97FD48BD7 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, const RuntimeMethod* method) 
{
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF6F7D3ED64E85D31556C2FB7C87162FA40C8B452(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m77113A39B4A6F3D226B48BEAF3518B55AB01A995 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* V_0 = NULL;
	int32_t V_1 = 0;
	Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* L_6;
		L_6 = EqualityComparer_1_get_Default_m2B4F62EDB23031C609551EC3F4671100D30E9CEA_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7E43D940B96D7285E9B06A4995E5DC3E4F75D750 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mB2AF075C1A6CDDDB77A2F1AD3F7951AF2C655046(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mC7D1153B9AF14948CABDF03CB0B9F2738E9D73A2((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3249322F295351E1E39A22F8FF2D22A73275F8D5 Dictionary_2_GetEnumerator_mD97F3876F7E1FBF9338BDC8B2B22692D2009F673 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3249322F295351E1E39A22F8FF2D22A73275F8D5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB32AE83D0B9758EC2EF27CE221A21821D81D1C66((&L_0), __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10B7076BC22D95FF279F7B347BC491E6EED5F0C9 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3249322F295351E1E39A22F8FF2D22A73275F8D5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB32AE83D0B9758EC2EF27CE221A21821D81D1C66((&L_0), __this, 2, NULL);
		Enumerator_t3249322F295351E1E39A22F8FF2D22A73275F8D5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m89F5BD4B0914CE05B9BFE5F9CEC5D9BBF3BB1443 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* L_6;
		L_6 = EqualityComparer_1_get_Default_m1382B31A95228129ADB9427B1EE639C76AB507FD_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mB2AF075C1A6CDDDB77A2F1AD3F7951AF2C655046(__this, NULL);
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_15 = (KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC*)(KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_16 = V_0;
		Dictionary_2_CopyTo_m7E43D940B96D7285E9B06A4995E5DC3E4F75D750(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mF6F7D3ED64E85D31556C2FB7C87162FA40C8B452 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = InternalManagedFileHandle_GetHashCode_mE32B81694AB4072CB85B3DB3AE79CCFC80D534D4_inline((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* L_21;
		L_21 = EqualityComparer_1_get_Default_m1382B31A95228129ADB9427B1EE639C76AB507FD_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5A7B3A4BD35EE33EF1D23EC63D0BF8C835146F95 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_5 = (EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE*)(EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m37E8831114C391DE86E5265088822C77C8902039 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* V_10 = NULL;
	InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m5A7B3A4BD35EE33EF1D23EC63D0BF8C835146F95(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = InternalManagedFileHandle_GetHashCode_mE32B81694AB4072CB85B3DB3AE79CCFC80D534D4_inline((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* L_26;
		L_26 = EqualityComparer_1_get_Default_m1382B31A95228129ADB9427B1EE639C76AB507FD_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value))->___handler), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_37 = ___0_key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value))->___handler), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_65 = ___0_key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mB1AA1911C550F562B65DE6DDC6F4936FADF503F4(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_101 = V_10;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_103 = V_10;
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_103->___value))->___handler), (void*)NULL);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mA2CD73716E10E5BF750F7BD1C88A8D5C1B02CD0D (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, __this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m5A7B3A4BD35EE33EF1D23EC63D0BF8C835146F95(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_21;
		L_21 = KeyValuePair_2_get_Key_m53238783BDA24C812C5D63BCE9F25FE73F867243_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_24;
		L_24 = KeyValuePair_2_get_Key_m53238783BDA24C812C5D63BCE9F25FE73F867243_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_27;
		L_27 = KeyValuePair_2_get_Value_mC76FA4AB276A8B74C6EFA434FC6F564522EB9710_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m283F367ACCC4A2031B27BDECBAD5371A37A3E136(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, __this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mB1AA1911C550F562B65DE6DDC6F4936FADF503F4 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mFE661A28565100336E2E0AC668DE8FBEE997B873(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFE661A28565100336E2E0AC668DE8FBEE997B873 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* V_1 = NULL;
	int32_t V_2 = 0;
	InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_3 = (EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE*)(EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_5 = __this->____entries;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391));
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391* L_17 = (InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = InternalManagedFileHandle_GetHashCode_mE32B81694AB4072CB85B3DB3AE79CCFC80D534D4_inline(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m242481DE2BE6F14286AAC901883DDBDCFF8A3FB0 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = InternalManagedFileHandle_GetHashCode_mE32B81694AB4072CB85B3DB3AE79CCFC80D534D4_inline((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* L_21;
		L_21 = EqualityComparer_1_get_Default_m1382B31A95228129ADB9427B1EE639C76AB507FD_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_22 = V_4;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_23 = L_22->___key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_26 = V_4;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_27 = L_26->___key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_42 = V_4;
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8* L_43 = (Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8*)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC1D876293F41F54114A00C3DC5D2BE5D67499DA6 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = InternalManagedFileHandle_GetHashCode_mE32B81694AB4072CB85B3DB3AE79CCFC80D534D4_inline((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* L_21;
		L_21 = EqualityComparer_1_get_Default_m1382B31A95228129ADB9427B1EE639C76AB507FD_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_22 = V_4;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_23 = L_22->___key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_26 = V_4;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_27 = L_26->___key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8* L_39 = ___1_value;
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_40 = V_4;
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_41 = L_40->___value;
		*(Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8*)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)&(((Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8*)L_39)->___handler), (void*)NULL);
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_45 = V_4;
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8* L_46 = (Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8*)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8));
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tA10AF69FA088B432C53449C37561D0D0CC66FBAB* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8* L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE89679F3C636638BA68140F715769F0ABA7145B0 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF6F7D3ED64E85D31556C2FB7C87162FA40C8B452(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8* L_3 = ___1_value;
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8*)L_3)->___handler), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mBC666C11EBA0B72ADB4131B3515055AAB0F31B32 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 ___0_key, Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 ___1_value, const RuntimeMethod* method) 
{
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_0 = ___0_key;
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m37E8831114C391DE86E5265088822C77C8902039(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mC2B3A5B741EB893C9A77CA7972344F98213D8033 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m7E43D940B96D7285E9B06A4995E5DC3E4F75D750(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m651255B0E8C4487FF155379369229E2F3F1A4CD4 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mB2AF075C1A6CDDDB77A2F1AD3F7951AF2C655046(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tDF7E4854F3A10BE0D3C2E93F0C148F124F044BDC* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m7E43D940B96D7285E9B06A4995E5DC3E4F75D750(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mC7D1153B9AF14948CABDF03CB0B9F2738E9D73A2((&L_55), L_51, L_54, NULL);
			KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9168706206A4190434407DE049B484FEF55FF115 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3249322F295351E1E39A22F8FF2D22A73275F8D5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB32AE83D0B9758EC2EF27CE221A21821D81D1C66((&L_0), __this, 2, NULL);
		Enumerator_t3249322F295351E1E39A22F8FF2D22A73275F8D5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mAF0EE038EA4679D2761253E6A6AF7FDE0E28DC17 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tE91170FFC8F35645B02EE83FAE075517459DBDDE* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m5A7B3A4BD35EE33EF1D23EC63D0BF8C835146F95(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_mFE661A28565100336E2E0AC668DE8FBEE997B873(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m225967F95362B50CAFAE31593850809443A041A9 (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBinding_t4902D3C6D27680D096CC41D83FFD0872785E57F8_mA18D5105179EC292D090491E378CBED448E54927(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m2C8B19C423C5ADE5459015BE8B0361D2DA4D2AE2(__this, L_3, ((*(Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 50)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 51)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mD6F28B2E38AE35E9B9BF0B79CF58D7AA11CCDC8B (Dictionary_2_tCE9DE62380B9B872A2620BB3F77F67E90B8A118B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3249322F295351E1E39A22F8FF2D22A73275F8D5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB32AE83D0B9758EC2EF27CE221A21821D81D1C66((&L_0), __this, 1, NULL);
		Enumerator_t3249322F295351E1E39A22F8FF2D22A73275F8D5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InternalManagedFileHandle_GetHashCode_mE32B81694AB4072CB85B3DB3AE79CCFC80D534D4_inline (InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___handle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_gshared_inline (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_key, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = ((EmptyArray_1_t2F24CF6B13CDDAA8B0F0764FD24AFE6483C69336_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Task_1_get_ResultOnSuccess_m15F655DF9F8EE6F8388A9432454900F07EFC57BB_inline (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_result;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Task_1_get_ResultOnSuccess_mF098AC108FFA2E0D992306C6D956BA37874FAC77_inline (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_result;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC Task_1_get_ResultOnSuccess_mF2B4314A2FC0448358439C96FC6217501A2ACFE0_inline (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method) 
{
	{
		VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC L_0 = __this->___m_result;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Task_1_get_ResultOnSuccess_mBB7F2275D4EF61A83D08373AA0D41ACC31AF73BD_gshared_inline (Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_result;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_gshared_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___U3CNativeInvocationContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_gshared_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___U3CNativeDelegateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* V_0 = NULL;
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_0 = ((EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mDDE2C10C48FE5C71172724020C00DA2C431DBF21(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_gshared_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_gshared_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* V_0 = NULL;
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_0 = ((EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB0408C395999134DEDD71AB568D127159ACF5141(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_gshared_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_gshared_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_0 = NULL;
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_0 = ((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_gshared_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_gshared_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mB0ED89FC7985F9676A84AF8FDFD3C6C53F478C90_gshared_inline (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m03EB6ADF69217A5128CE44A71DAAA98C5D33B9FB_gshared_inline (KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* EqualityComparer_1_get_Default_m1382B31A95228129ADB9427B1EE639C76AB507FD_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* V_0 = NULL;
	{
		EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* L_0 = ((EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m538EEAA8DA010A259CC57D5123DA0B894EFC04BE(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t548453358AEB04B7C4B4DF9EE0955156132C3E35* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 KeyValuePair_2_get_Key_m53238783BDA24C812C5D63BCE9F25FE73F867243_inline (KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE* __this, const RuntimeMethod* method) 
{
	{
		InternalManagedFileHandle_t1578FEE483FEB6924F10CD3016EFAA2A1B9FD391 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 KeyValuePair_2_get_Value_mC76FA4AB276A8B74C6EFA434FC6F564522EB9710_inline (KeyValuePair_2_tE48FEF54701661F0E884F51FD75CBB53D546CBBE* __this, const RuntimeMethod* method) 
{
	{
		Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* EqualityComparer_1_get_Default_m2B4F62EDB23031C609551EC3F4671100D30E9CEA_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* V_0 = NULL;
	{
		EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* L_0 = ((EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m596C801639AA4AC5BAEF2ADC1E5651C7F99C400F(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t3D952F433060562F64447B640B1476ED9A9D9EE9* L_4 = V_0;
		return L_4;
	}
}

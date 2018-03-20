// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseAndroidText-9d82b652.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Android.AppRoot.h>
#include <Fuse.Android.Bitmap.h>
#include <Fuse.Android.Blitter.h>
#include <Fuse.Android.Canvas.h>
#include <Fuse.Android.GLUtils.h>
#include <Fuse.Android.RootGrap-9e25fcdc.h>
#include <Fuse.Android.RootGraphicsView.h>
#include <Fuse.Android.StaticLa-888bb769.h>
#include <Fuse.Android.StaticLayout.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Android.StatusBarHelper.h>
#include <Fuse.Android.TextControlLayout.h>
#include <Fuse.Android.TextPaint.h>
#include <Fuse.Android.TextRend-b6e4a886.h>
#include <Fuse.Android.TextRenderer.h>
#include <Fuse.Android.TextUtil-6613d379.h>
#include <Fuse.Android.TextUtils.h>
#include <Fuse.App.h>
#include <Fuse.Controls.Native.-6178e8bc.h>
#include <Fuse.Controls.Native.-88fc1c1d.h>
#include <Fuse.Controls.Native.-ca2427b3.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.-f43d469d.h>
#include <Fuse.Controls.Native.-f715ad8a.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Font.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.Visual.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Action.h>
#include <Uno.Application.h>
#include <Uno.ArgumentOutOfRang-6803b39e.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Color.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-4a875e1d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implement-6e9df330.h>
#include <Uno.Runtime.Implement-81e7ab4c.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UX.Template.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[3];
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/Internal/StaticLayout.uno
// ---------------------------------------------------------------------------------------

// public enum StaticLayout.Alignment :14
uEnumType* StaticLayout__Alignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Android.StaticLayout.Alignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Center", 0LL,
        "Normal", 1LL,
        "Opposite", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Android/1.4.2/AppRoot.uno
// ------------------------------------------------------------

// internal static extern class AppRoot :11
// {
// static AppRoot() :27
static void AppRoot__cctor__fn(uType* __type)
{
    AppRoot::_rootContainer_ = AppRoot::CreateRootView();
    AppRoot::_viewHandle_ = ::g::Fuse::Controls::Native::ViewHandle::New1(AppRoot::_rootContainer_);
    AppRoot::SetAppRoot(AppRoot::_rootContainer_);
}

static void AppRoot_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::App_typeof();
    type->SetDependencies(
        ::g::Uno::Application_typeof(),
        ::g::Fuse::Controls::Native::Android::InputDispatch_typeof(),
        ::g::Fuse::Platform::SystemUI_typeof());
    type->SetFields(0,
        ::g::Java::Object_typeof(), (uintptr_t)&AppRoot::_rootContainer_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Native::ViewHandle_typeof(), (uintptr_t)&AppRoot::_viewHandle_, uFieldFlagsStatic);
}

uClassType* AppRoot_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.AppRoot", options);
    type->fp_build_ = AppRoot_build;
    type->fp_cctor_ = AppRoot__cctor__fn;
    return type;
}

// public static void ClearRoot(Fuse.Controls.Native.ViewHandle handle) :39
void AppRoot__ClearRoot_fn(::g::Fuse::Controls::Native::ViewHandle* handle)
{
    AppRoot::ClearRoot(handle);
}

// public static void ClearRoot(Java.Object handle) :45
void AppRoot__ClearRoot1_fn(::g::Java::Object* handle)
{
    AppRoot::ClearRoot1(handle);
}

// private static Java.Object CreateRootView() :68
void AppRoot__CreateRootView_fn(::g::Java::Object** __retval)
{
    *__retval = AppRoot::CreateRootView();
}

// private static void OnTouchEvent__(Java.Object motionEvent) :61
void AppRoot__OnTouchEvent___fn(::g::Java::Object* motionEvent)
{
    AppRoot::OnTouchEvent__(motionEvent);
}

// private static void SetAppRoot(Java.Object rootView) :56
void AppRoot__SetAppRoot_fn(::g::Java::Object* rootView)
{
    AppRoot::SetAppRoot(rootView);
}

// public static void SetRootView(Fuse.Controls.Native.ViewHandle handle) :34
void AppRoot__SetRootView_fn(::g::Fuse::Controls::Native::ViewHandle* handle)
{
    AppRoot::SetRootView(handle);
}

// private static void SetRootView(Java.Object handle, Java.Object rootHandle) :51
void AppRoot__SetRootView1_fn(::g::Java::Object* handle, ::g::Java::Object* rootHandle)
{
    AppRoot::SetRootView1(handle, rootHandle);
}

// public static Fuse.Controls.Native.ViewHandle get_ViewHandle() :16
void AppRoot__get_ViewHandle_fn(::g::Fuse::Controls::Native::ViewHandle** __retval)
{
    *__retval = AppRoot::ViewHandle();
}

uSStrong< ::g::Java::Object*> AppRoot::_rootContainer_;
uSStrong< ::g::Fuse::Controls::Native::ViewHandle*> AppRoot::_viewHandle_;

// public static void ClearRoot(Fuse.Controls.Native.ViewHandle handle) [static] :39
void AppRoot::ClearRoot(::g::Fuse::Controls::Native::ViewHandle* handle)
{
    AppRoot_typeof()->Init();
    AppRoot::ClearRoot1(AppRoot::_rootContainer_);
}

// public static void ClearRoot(Java.Object handle) [static] :45
void AppRoot::ClearRoot1(::g::Java::Object* handle)
{
    AppRoot_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearRoot1345", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateRootView() [static] :68
::g::Java::Object* AppRoot::CreateRootView()
{
    AppRoot_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateRootView346", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void OnTouchEvent__(Java.Object motionEvent) [static] :61
void AppRoot::OnTouchEvent__(::g::Java::Object* motionEvent)
{
    AppRoot_typeof()->Init();
    ::g::Fuse::Visual* root = uPtr(uCast< ::g::Fuse::App*>(::g::Uno::Application::Current1(), ::TYPES[0/*Fuse.App*/]))->ChildrenVisual();
    ::g::Fuse::Controls::Native::Android::InputDispatch::RaiseEvent(root, AppRoot::_rootContainer_, ::g::Fuse::Controls::Native::Android::MotionEvent::New1(motionEvent));
}

// private static void SetAppRoot(Java.Object rootView) [static] :56
void AppRoot::SetAppRoot(::g::Java::Object* rootView)
{
    AppRoot_typeof()->Init();
    ::g::Fuse::Platform::SystemUI::RootView(rootView);
}

// public static void SetRootView(Fuse.Controls.Native.ViewHandle handle) [static] :34
void AppRoot::SetRootView(::g::Fuse::Controls::Native::ViewHandle* handle)
{
    AppRoot_typeof()->Init();
    AppRoot::SetRootView1(AppRoot::_rootContainer_, uPtr(handle)->NativeHandle);
}

// private static void SetRootView(Java.Object handle, Java.Object rootHandle) [static] :51
void AppRoot::SetRootView1(::g::Java::Object* handle, ::g::Java::Object* rootHandle)
{
    AppRoot_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRootView1348", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _urootHandle=rootHandle;
        jobject _rootHandle = (_urootHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_urootHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_rootHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_rootHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_rootHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static Fuse.Controls.Native.ViewHandle get_ViewHandle() [static] :16
::g::Fuse::Controls::Native::ViewHandle* AppRoot::ViewHandle()
{
    AppRoot_typeof()->Init();
    return AppRoot::_viewHandle_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/TextRenderer.uno
// ------------------------------------------------------------------------------

// private sealed class TextRenderer.BackgroundRender :281
// {
static void TextRenderer__BackgroundRender_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Android::TextRenderer_typeof(), offsetof(TextRenderer__BackgroundRender, _textRenderer), 0,
        ::g::Uno::ULong_typeof(), offsetof(TextRenderer__BackgroundRender, _textureVersion), 0,
        ::g::Fuse::Android::StaticLayout_typeof(), offsetof(TextRenderer__BackgroundRender, _layout), 0,
        ::g::Uno::Recti_typeof(), offsetof(TextRenderer__BackgroundRender, _pixelBounds), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(TextRenderer__BackgroundRender, _result), 0);
}

uType* TextRenderer__BackgroundRender_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TextRenderer__BackgroundRender);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextRenderer.BackgroundRender", options);
    type->fp_build_ = TextRenderer__BackgroundRender_build;
    return type;
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) :289
void TextRenderer__BackgroundRender__ctor__fn(TextRenderer__BackgroundRender* __this, ::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti* pixelBounds)
{
    __this->ctor_(textRenderer, *textureVersion, layout, *pixelBounds);
}

// private void DoneCallback() :307
void TextRenderer__BackgroundRender__DoneCallback_fn(TextRenderer__BackgroundRender* __this)
{
    __this->DoneCallback();
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) :289
void TextRenderer__BackgroundRender__New1_fn(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti* pixelBounds, TextRenderer__BackgroundRender** __retval)
{
    *__retval = TextRenderer__BackgroundRender::New1(textRenderer, *textureVersion, layout, *pixelBounds);
}

// public void UpdateTextureAsync() :297
void TextRenderer__BackgroundRender__UpdateTextureAsync_fn(TextRenderer__BackgroundRender* __this)
{
    __this->UpdateTextureAsync();
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) [instance] :289
void TextRenderer__BackgroundRender::ctor_(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti pixelBounds)
{
    _textRenderer = textRenderer;
    _textureVersion = textureVersion;
    _layout = layout;
    _pixelBounds = pixelBounds;
}

// private void DoneCallback() [instance] :307
void TextRenderer__BackgroundRender::DoneCallback()
{
    if (_textureVersion == uPtr(_textRenderer)->_wantedVersion)
    {
        uPtr(_textRenderer)->SetTexture(_result);
        uPtr(_textRenderer)->_textureVersion = _textureVersion;
    }
    else
        uPtr(_result)->Dispose();
}

// public void UpdateTextureAsync() [instance] :297
void TextRenderer__BackgroundRender::UpdateTextureAsync()
{
    _result = uPtr(_textRenderer)->UpdateTexture(_layout, _pixelBounds);
    ::g::OpenGL::GL::Finish();
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__DoneCallback_fn, this));
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) [static] :289
TextRenderer__BackgroundRender* TextRenderer__BackgroundRender::New1(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti pixelBounds)
{
    TextRenderer__BackgroundRender* obj1 = (TextRenderer__BackgroundRender*)uNew(TextRenderer__BackgroundRender_typeof());
    obj1->ctor_(textRenderer, textureVersion, layout, pixelBounds);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/Internal/Bitmap.uno
// ---------------------------------------------------------------------------------

// internal sealed extern class Bitmap :12
// {
static void Bitmap_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Color_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Bitmap_type, interface0));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(Bitmap, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(Bitmap, _isDisposed), 0);
}

Bitmap_type* Bitmap_typeof()
{
    static uSStrong<Bitmap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Bitmap);
    options.TypeSize = sizeof(Bitmap_type);
    type = (Bitmap_type*)uClassType::New("Fuse.Android.Bitmap", options);
    type->fp_build_ = Bitmap_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Bitmap__Dispose_fn;
    return type;
}

// public Bitmap(Java.Object handle) :21
void Bitmap__ctor__fn(Bitmap* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public static Fuse.Android.Bitmap CreateBitmapARGB8888(int width, int height) :31
void Bitmap__CreateBitmapARGB8888_fn(int* width, int* height, Bitmap** __retval)
{
    *__retval = Bitmap::CreateBitmapARGB8888(*width, *height);
}

// private static Java.Object CreateBitmapARGB8888Impl(int width, int height) :58
void Bitmap__CreateBitmapARGB8888Impl_fn(int* width, int* height, ::g::Java::Object** __retval)
{
    *__retval = Bitmap::CreateBitmapARGB8888Impl(*width, *height);
}

// public void Dispose() :42
void Bitmap__Dispose_fn(Bitmap* __this)
{
    __this->Dispose();
}

// public void EraseColor(float4 color) :26
void Bitmap__EraseColor_fn(Bitmap* __this, ::g::Uno::Float4* color)
{
    __this->EraseColor(*color);
}

// private static void EraseColor(Java.Object handle, int color) :64
void Bitmap__EraseColor1_fn(::g::Java::Object* handle, int* color)
{
    Bitmap::EraseColor1(handle, *color);
}

// public Java.Object get_Handle() :16
void Bitmap__get_Handle_fn(Bitmap* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Bitmap New(Java.Object handle) :21
void Bitmap__New1_fn(::g::Java::Object* handle, Bitmap** __retval)
{
    *__retval = Bitmap::New1(handle);
}

// public void Recycle() :36
void Bitmap__Recycle_fn(Bitmap* __this)
{
    __this->Recycle();
}

// private static void Recycle(Java.Object handle) :52
void Bitmap__Recycle1_fn(::g::Java::Object* handle)
{
    Bitmap::Recycle1(handle);
}

// public Bitmap(Java.Object handle) [instance] :21
void Bitmap::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public void Dispose() [instance] :42
void Bitmap::Dispose()
{
    if (!_isDisposed)
    {
        Recycle();
        _isDisposed = true;
    }
}

// public void EraseColor(float4 color) [instance] :26
void Bitmap::EraseColor(::g::Uno::Float4 color)
{
    Bitmap::EraseColor1(Handle(), (int)::g::Uno::Color::ToArgb(color));
}

// public Java.Object get_Handle() [instance] :16
::g::Java::Object* Bitmap::Handle()
{
    return _handle;
}

// public void Recycle() [instance] :36
void Bitmap::Recycle()
{
    Bitmap::Recycle1(Handle());
}

// public static Fuse.Android.Bitmap CreateBitmapARGB8888(int width, int height) [static] :31
Bitmap* Bitmap::CreateBitmapARGB8888(int width, int height)
{
    return Bitmap::New1(Bitmap::CreateBitmapARGB8888Impl(width, height));
}

// private static Java.Object CreateBitmapARGB8888Impl(int width, int height) [static] :58
::g::Java::Object* Bitmap::CreateBitmapARGB8888Impl(int width, int height)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateBitmapARGB8888Impl349", "(II)Ljava/lang/Object;");
        int _uwidth=width;
        jint _width = (jint)_uwidth;
        int _uheight=height;
        jint _height = (jint)_uheight;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_width,_height);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void EraseColor(Java.Object handle, int color) [static] :64
void Bitmap::EraseColor1(::g::Java::Object* handle, int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "EraseColor1350", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public Bitmap New(Java.Object handle) [static] :21
Bitmap* Bitmap::New1(::g::Java::Object* handle)
{
    Bitmap* obj1 = (Bitmap*)uNew(Bitmap_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// private static void Recycle(Java.Object handle) [static] :52
void Bitmap::Recycle1(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Recycle1351", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/TextRenderer.uno
// ------------------------------------------------------------------------------

// internal sealed class Blitter :351
// {
// static generated Blitter() :351
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Blitter, Blit_v_67760dd9_3_4_1), 0,
        ::TYPES[2/*float2[]*/], offsetof(Blitter, Blit_verts_67760dd9_3_3_5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Blitter, _draw_67760dd9), 0,
        type, (uintptr_t)&Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :351
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :355
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :351
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :351
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :351
void Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :355
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    _draw_67760dd9.BlendEnabled(true);
    _draw_67760dd9.DepthTestEnabled(false);
    _draw_67760dd9.CullFace(0);
    _draw_67760dd9.BlendSrcAlpha(7);
    _draw_67760dd9.BlendDstRgb(3);
    _draw_67760dd9.Use();
    _draw_67760dd9.Attrib1(0, 2, Blit_v_67760dd9_3_4_1, 8, 0);
    _draw_67760dd9.Uniform2(1, size);
    _draw_67760dd9.Uniform2(2, pos);
    _draw_67760dd9.Uniform12(3, localToClipTransform);
    _draw_67760dd9.Sampler3(4, vt, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_67760dd9.DrawArrays(uPtr(Blit_verts_67760dd9_3_3_5)->Length());
}

// private generated void init_DrawCalls() [instance] :351
void Blitter::init_DrawCalls()
{
    uArray* verts_67760dd9_3_3_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_67760dd9_3_4_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_67760dd9_3_3_0), 0);
    Blit_verts_67760dd9_3_3_5 = verts_67760dd9_3_3_0;
    _draw_67760dd9 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseAndroidTextRenderer_bundle::Blitter83cfc6f0());
}

// public generated Blitter New() [static] :351
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/Internal/Canvas.uno
// ---------------------------------------------------------------------------------

// internal sealed extern class Canvas :12
// {
static void Canvas_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(Canvas, _handle), 0);
}

uType* Canvas_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Canvas);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Canvas", options);
    type->fp_build_ = Canvas_build;
    return type;
}

// public Canvas(Fuse.Android.Bitmap bitmap) :26
void Canvas__ctor__fn(Canvas* __this, ::g::Fuse::Android::Bitmap* bitmap)
{
    __this->ctor_(bitmap);
}

// public Canvas(Java.Object handle) :21
void Canvas__ctor_1_fn(Canvas* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// private static Java.Object Create(Java.Object bitmapHandle) :40
void Canvas__Create_fn(::g::Java::Object* bitmapHandle, ::g::Java::Object** __retval)
{
    *__retval = Canvas::Create(bitmapHandle);
}

// public Java.Object get_Handle() :16
void Canvas__get_Handle_fn(Canvas* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Canvas New(Fuse.Android.Bitmap bitmap) :26
void Canvas__New1_fn(::g::Fuse::Android::Bitmap* bitmap, Canvas** __retval)
{
    *__retval = Canvas::New1(bitmap);
}

// public void Translate(float dx, float dy) :28
void Canvas__Translate_fn(Canvas* __this, float* dx, float* dy)
{
    __this->Translate(*dx, *dy);
}

// private static void Translate(Java.Object handle, float dx, float dy) :34
void Canvas__Translate1_fn(::g::Java::Object* handle, float* dx, float* dy)
{
    Canvas::Translate1(handle, *dx, *dy);
}

// public Canvas(Fuse.Android.Bitmap bitmap) [instance] :26
void Canvas::ctor_(::g::Fuse::Android::Bitmap* bitmap)
{
    ctor_1(Canvas::Create(uPtr(bitmap)->Handle()));
}

// public Canvas(Java.Object handle) [instance] :21
void Canvas::ctor_1(::g::Java::Object* handle)
{
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :16
::g::Java::Object* Canvas::Handle()
{
    return _handle;
}

// public void Translate(float dx, float dy) [instance] :28
void Canvas::Translate(float dx, float dy)
{
    Canvas::Translate1(Handle(), dx, dy);
}

// private static Java.Object Create(Java.Object bitmapHandle) [static] :40
::g::Java::Object* Canvas::Create(::g::Java::Object* bitmapHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create352", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ubitmapHandle=bitmapHandle;
        jobject _bitmapHandle = (_ubitmapHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_bitmapHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_bitmapHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmapHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Canvas New(Fuse.Android.Bitmap bitmap) [static] :26
Canvas* Canvas::New1(::g::Fuse::Android::Bitmap* bitmap)
{
    Canvas* obj2 = (Canvas*)uNew(Canvas_typeof());
    obj2->ctor_(bitmap);
    return obj2;
}

// private static void Translate(Java.Object handle, float dx, float dy) [static] :34
void Canvas::Translate1(::g::Java::Object* handle, float dx, float dy)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Translate1353", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _udx=dx;
        jfloat _dx = (jfloat)_udx;
        float _udy=dy;
        jfloat _dy = (jfloat)_udy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_dx,_dy);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/Internal/GLUtils.uno
// ----------------------------------------------------------------------------------

// internal sealed extern class GLUtils :12
// {
static void GLUtils_build(uType* type)
{
}

uType* GLUtils_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GLUtils);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.GLUtils", options);
    type->fp_build_ = GLUtils_build;
    return type;
}

// private static void TexImage2D(int target, int level, Java.Object bitmap, int border) :20
void GLUtils__TexImage2D_fn(int* target, int* level, ::g::Java::Object* bitmap, int* border)
{
    GLUtils::TexImage2D(*target, *level, bitmap, *border);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, Fuse.Android.Bitmap bitmap, int border) :14
void GLUtils__TexImage2D1_fn(int* target, int* level, ::g::Fuse::Android::Bitmap* bitmap, int* border)
{
    GLUtils::TexImage2D1(*target, *level, bitmap, *border);
}

// private static void TexImage2D(int target, int level, Java.Object bitmap, int border) [static] :20
void GLUtils::TexImage2D(int target, int level, ::g::Java::Object* bitmap, int border)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "TexImage2D354", "(IILjava/lang/Object;I)V");
        int _utarget=target;
        jint _target = (jint)_utarget;
        int _ulevel=level;
        jint _level = (jint)_ulevel;
        ::g::Java::Object* _ubitmap=bitmap;
        jobject _bitmap = (_ubitmap==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uborder=border;
        jint _border = (jint)_uborder;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_target,_level,_bitmap,_border);
        
        
        
        if (_bitmap!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmap); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, Fuse.Android.Bitmap bitmap, int border) [static] :14
void GLUtils::TexImage2D1(int target, int level, ::g::Fuse::Android::Bitmap* bitmap, int border)
{
    GLUtils::TexImage2D(target, level, uPtr(bitmap)->Handle(), border);
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/1.4.2/.uno/ux13/Fuse.Android.RootGraphicsView.g.uno
// ----------------------------------------------------------------------------------------------

// public partial sealed class RootGraphicsView :4
// {
// static RootGraphicsView() :25
static void RootGraphicsView__cctor_4_fn(uType* __type)
{
}

static void RootGraphicsView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface9),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface16),
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface17),
        ::g::Fuse::IRenderViewport_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface18),
        ::g::Fuse::Elements::ITreeRenderer_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface19),
        ::g::Fuse::Controls::IProxyHost_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface20),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface21));
    type->SetFields(111);
}

::g::Fuse::Controls::GraphicsView_type* RootGraphicsView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::GraphicsView_typeof();
    options.FieldCount = 111;
    options.InterfaceCount = 22;
    options.ObjectSize = sizeof(RootGraphicsView);
    options.TypeSize = sizeof(::g::Fuse::Controls::GraphicsView_type);
    type = (::g::Fuse::Controls::GraphicsView_type*)uClassType::New("Fuse.Android.RootGraphicsView", options);
    type->fp_build_ = RootGraphicsView_build;
    type->fp_ctor_ = (void*)RootGraphicsView__New4_fn;
    type->fp_cctor_ = RootGraphicsView__cctor_4_fn;
    type->interface20.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::GraphicsView__FuseControlsIProxyHostInsert_fn;
    type->interface20.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::GraphicsView__FuseControlsIProxyHostRemove_fn;
    type->interface19.fp_RootingStarted = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererRootingStarted_fn;
    type->interface19.fp_Rooted = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererRooted_fn;
    type->interface19.fp_Unrooted = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererUnrooted_fn;
    type->interface19.fp_BackgroundChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererBackgroundChanged_fn;
    type->interface19.fp_TransformChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererTransformChanged_fn;
    type->interface19.fp_Placed = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererPlaced_fn;
    type->interface19.fp_IsVisibleChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererIsVisibleChanged_fn;
    type->interface19.fp_IsEnabledChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererIsEnabledChanged_fn;
    type->interface19.fp_OpacityChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, float*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererOpacityChanged_fn;
    type->interface19.fp_ClipToBoundsChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererClipToBoundsChanged_fn;
    type->interface19.fp_HitTestModeChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererHitTestModeChanged_fn;
    type->interface19.fp_ZOrderChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, uArray*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererZOrderChanged_fn;
    type->interface19.fp_Measure = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererMeasure_fn;
    type->interface20.fp_get_WorldTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::GraphicsView__FuseControlsIProxyHostget_WorldTransformInverse_fn;
    type->interface17.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Fuse::Ray*))::g::Fuse::Controls::GraphicsView__PointToWorldRay_fn;
    type->interface17.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Fuse::Ray*, ::g::Fuse::Visual*, ::g::Fuse::Ray*))::g::Fuse::Controls::GraphicsView__WorldToLocalRay_fn;
    type->interface18.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::GraphicsView__get_ViewProjectionTransform_fn;
    type->interface21.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))::g::Fuse::Controls::GraphicsView__get_PixelsPerPoint_fn;
    type->interface21.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::GraphicsView__get_Size_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public RootGraphicsView() :29
void RootGraphicsView__ctor_7_fn(RootGraphicsView* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :33
void RootGraphicsView__InitializeUX1_fn(RootGraphicsView* __this)
{
    __this->InitializeUX1();
}

// public RootGraphicsView New() :29
void RootGraphicsView__New4_fn(RootGraphicsView** __retval)
{
    *__retval = RootGraphicsView::New4();
}

// public RootGraphicsView() [instance] :29
void RootGraphicsView::ctor_7()
{
    ctor_6();
    InitializeUX1();
}

// private void InitializeUX() [instance] :33
void RootGraphicsView::InitializeUX1()
{
    RootGraphicsView__Template* AndroidAppearance = RootGraphicsView__Template::New2(this, this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), AndroidAppearance);
}

// public RootGraphicsView New() [static] :29
RootGraphicsView* RootGraphicsView::New4()
{
    RootGraphicsView* obj1 = (RootGraphicsView*)uNew(RootGraphicsView_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/Internal/StaticLayout.uno
// ---------------------------------------------------------------------------------------

// internal sealed extern class StaticLayout :12
// {
static void StaticLayout_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(StaticLayout, _handle), 0);
}

uType* StaticLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(StaticLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.StaticLayout", options);
    type->fp_build_ = StaticLayout_build;
    return type;
}

// public StaticLayout(Java.Object handle) :28
void StaticLayout__ctor__fn(StaticLayout* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public StaticLayout(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) :33
void StaticLayout__ctor_1_fn(StaticLayout* __this, uString* text, ::g::Fuse::Android::TextPaint* paint, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad)
{
    __this->ctor_1(text, paint, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public StaticLayout(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) :44
void StaticLayout__ctor_2_fn(StaticLayout* __this, uString* text, int* bufStart, int* bufEnd, ::g::Fuse::Android::TextPaint* paint, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith)
{
    __this->ctor_2(text, *bufStart, *bufEnd, paint, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// private static Java.Object Create(string text, int bufStart, int bufEnd, Java.Object paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith) :191
void StaticLayout__Create_fn(uString* text, int* bufStart, int* bufEnd, ::g::Java::Object* paintHandle, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith, ::g::Java::Object** __retval)
{
    *__retval = StaticLayout::Create(text, *bufStart, *bufEnd, paintHandle, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// private static Java.Object Create(string text, Java.Object paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad) :171
void StaticLayout__Create1_fn(uString* text, ::g::Java::Object* paintHandle, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad, ::g::Java::Object** __retval)
{
    *__retval = StaticLayout::Create1(text, paintHandle, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public void Draw(Fuse.Android.Canvas canvas) :104
void StaticLayout__Draw_fn(StaticLayout* __this, ::g::Fuse::Android::Canvas* canvas)
{
    __this->Draw(canvas);
}

// private static void Draw(Java.Object layoutHandle, Java.Object canvasHandle) :110
void StaticLayout__Draw1_fn(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle)
{
    StaticLayout::Draw1(layoutHandle, canvasHandle);
}

// public int get_EllipsizedWidth() :71
void StaticLayout__get_EllipsizedWidth_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->EllipsizedWidth();
}

// public static float GetDesiredWidth(string text, Fuse.Android.TextPaint paint) :59
void StaticLayout__GetDesiredWidth_fn(uString* text, ::g::Fuse::Android::TextPaint* paint, float* __retval)
{
    *__retval = StaticLayout::GetDesiredWidth(text, paint);
}

// private static float GetDesiredWidthImpl(string text, Java.Object paintHandle) :158
void StaticLayout__GetDesiredWidthImpl_fn(uString* text, ::g::Java::Object* paintHandle, float* __retval)
{
    *__retval = StaticLayout::GetDesiredWidthImpl(text, paintHandle);
}

// private static int GetEllipsizedWidth(Java.Object handle) :128
void StaticLayout__GetEllipsizedWidth_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetEllipsizedWidth(handle);
}

// private static int GetHeight(Java.Object handle) :116
void StaticLayout__GetHeight_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetHeight(handle);
}

// public int GetLineBaseline(int line) :99
void StaticLayout__GetLineBaseline_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineBaseline(*line);
}

// private static int GetLineBaseline(Java.Object handle, int line) :134
void StaticLayout__GetLineBaseline1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineBaseline1(handle, *line);
}

// private static int GetLineCount(Java.Object handle) :165
void StaticLayout__GetLineCount_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetLineCount(handle);
}

// public int GetLineEnd(int line) :89
void StaticLayout__GetLineEnd_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineEnd(*line);
}

// private static int GetLineEnd(Java.Object handle, int line) :152
void StaticLayout__GetLineEnd1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineEnd1(handle, *line);
}

// public float GetLineLeft(int line) :94
void StaticLayout__GetLineLeft_fn(StaticLayout* __this, int* line, float* __retval)
{
    *__retval = __this->GetLineLeft(*line);
}

// private static float GetLineLeft(Java.Object handle, int line) :140
void StaticLayout__GetLineLeft1_fn(::g::Java::Object* handle, int* line, float* __retval)
{
    *__retval = StaticLayout::GetLineLeft1(handle, *line);
}

// public int GetLineStart(int line) :84
void StaticLayout__GetLineStart_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineStart(*line);
}

// private static int GetLineStart(Java.Object handle, int line) :146
void StaticLayout__GetLineStart1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineStart1(handle, *line);
}

// public Java.Object get_Handle() :23
void StaticLayout__get_Handle_fn(StaticLayout* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public int get_Height() :76
void StaticLayout__get_Height_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->Height();
}

// public int get_LineCount() :66
void StaticLayout__get_LineCount_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->LineCount();
}

// public StaticLayout New(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) :33
void StaticLayout__New2_fn(uString* text, ::g::Fuse::Android::TextPaint* paint, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad, StaticLayout** __retval)
{
    *__retval = StaticLayout::New2(text, paint, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public StaticLayout New(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) :44
void StaticLayout__New3_fn(uString* text, int* bufStart, int* bufEnd, ::g::Fuse::Android::TextPaint* paint, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith, StaticLayout** __retval)
{
    *__retval = StaticLayout::New3(text, *bufStart, *bufEnd, paint, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// public StaticLayout(Java.Object handle) [instance] :28
void StaticLayout::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public StaticLayout(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) [instance] :33
void StaticLayout::ctor_1(uString* text, ::g::Fuse::Android::TextPaint* paint, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    ctor_(StaticLayout::Create1(text, uPtr(paint)->Handle(), width, align, spacingMult, spacingAdd, includePad));
}

// public StaticLayout(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) [instance] :44
void StaticLayout::ctor_2(uString* text, int bufStart, int bufEnd, ::g::Fuse::Android::TextPaint* paint, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    ctor_(StaticLayout::Create(text, bufStart, bufEnd, uPtr(paint)->Handle(), outerWidth, align, spacingMult, spacingAdd, includePad, truncateAt, ellipsizedWith));
}

// public void Draw(Fuse.Android.Canvas canvas) [instance] :104
void StaticLayout::Draw(::g::Fuse::Android::Canvas* canvas)
{
    StaticLayout::Draw1(Handle(), uPtr(canvas)->Handle());
}

// public int get_EllipsizedWidth() [instance] :71
int StaticLayout::EllipsizedWidth()
{
    return StaticLayout::GetEllipsizedWidth(Handle());
}

// public int GetLineBaseline(int line) [instance] :99
int StaticLayout::GetLineBaseline(int line)
{
    return StaticLayout::GetLineBaseline1(Handle(), line);
}

// public int GetLineEnd(int line) [instance] :89
int StaticLayout::GetLineEnd(int line)
{
    return StaticLayout::GetLineEnd1(Handle(), line);
}

// public float GetLineLeft(int line) [instance] :94
float StaticLayout::GetLineLeft(int line)
{
    return StaticLayout::GetLineLeft1(Handle(), line);
}

// public int GetLineStart(int line) [instance] :84
int StaticLayout::GetLineStart(int line)
{
    return StaticLayout::GetLineStart1(Handle(), line);
}

// public Java.Object get_Handle() [instance] :23
::g::Java::Object* StaticLayout::Handle()
{
    return _handle;
}

// public int get_Height() [instance] :76
int StaticLayout::Height()
{
    return StaticLayout::GetHeight(Handle());
}

// public int get_LineCount() [instance] :66
int StaticLayout::LineCount()
{
    return StaticLayout::GetLineCount(Handle());
}

// private static Java.Object Create(string text, int bufStart, int bufEnd, Java.Object paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith) [static] :191
::g::Java::Object* StaticLayout::Create(uString* text, int bufStart, int bufEnd, ::g::Java::Object* paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create355", "(Ljava/lang/String;IILjava/lang/Object;IIFFZII)Ljava/lang/Object;");
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        int _ubufStart=bufStart;
        jint _bufStart = (jint)_ubufStart;
        int _ubufEnd=bufEnd;
        jint _bufEnd = (jint)_ubufEnd;
        ::g::Java::Object* _upaintHandle=paintHandle;
        jobject _paintHandle = (_upaintHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upaintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uouterWidth=outerWidth;
        jint _outerWidth = (jint)_uouterWidth;
        int _ualign=align;
        jint _align = (jint)_ualign;
        float _uspacingMult=spacingMult;
        jfloat _spacingMult = (jfloat)_uspacingMult;
        float _uspacingAdd=spacingAdd;
        jfloat _spacingAdd = (jfloat)_uspacingAdd;
        bool _uincludePad=includePad;
        jboolean _includePad = (jboolean)_uincludePad;
        int _utruncateAt=truncateAt;
        jint _truncateAt = (jint)_utruncateAt;
        int _uellipsizedWith=ellipsizedWith;
        jint _ellipsizedWith = (jint)_uellipsizedWith;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_text,_bufStart,_bufEnd,_paintHandle,_outerWidth,_align,_spacingMult,_spacingAdd,_includePad,_truncateAt,_ellipsizedWith);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        
        
        if (_paintHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_paintHandle); }
        
        
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object Create(string text, Java.Object paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad) [static] :171
::g::Java::Object* StaticLayout::Create1(uString* text, ::g::Java::Object* paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create1356", "(Ljava/lang/String;Ljava/lang/Object;IIFFZ)Ljava/lang/Object;");
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        ::g::Java::Object* _upaintHandle=paintHandle;
        jobject _paintHandle = (_upaintHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upaintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uwidth=width;
        jint _width = (jint)_uwidth;
        int _ualign=align;
        jint _align = (jint)_ualign;
        float _uspacingMult=spacingMult;
        jfloat _spacingMult = (jfloat)_uspacingMult;
        float _uspacingAdd=spacingAdd;
        jfloat _spacingAdd = (jfloat)_uspacingAdd;
        bool _uincludePad=includePad;
        jboolean _includePad = (jboolean)_uincludePad;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_text,_paintHandle,_width,_align,_spacingMult,_spacingAdd,_includePad);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        if (_paintHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_paintHandle); }
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void Draw(Java.Object layoutHandle, Java.Object canvasHandle) [static] :110
void StaticLayout::Draw1(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Draw1357", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _ulayoutHandle=layoutHandle;
        jobject _layoutHandle = (_ulayoutHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulayoutHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ucanvasHandle=canvasHandle;
        jobject _canvasHandle = (_ucanvasHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucanvasHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_layoutHandle,_canvasHandle);
        
        if (_layoutHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_layoutHandle); }
        if (_canvasHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_canvasHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static float GetDesiredWidth(string text, Fuse.Android.TextPaint paint) [static] :59
float StaticLayout::GetDesiredWidth(uString* text, ::g::Fuse::Android::TextPaint* paint)
{
    return StaticLayout::GetDesiredWidthImpl((text != NULL) ? text : ::STRINGS[2/*""*/], uPtr(paint)->Handle());
}

// private static float GetDesiredWidthImpl(string text, Java.Object paintHandle) [static] :158
float StaticLayout::GetDesiredWidthImpl(uString* text, ::g::Java::Object* paintHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDesiredWidthImpl358", "(Ljava/lang/String;Ljava/lang/Object;)F");
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        ::g::Java::Object* _upaintHandle=paintHandle;
        jobject _paintHandle = (_upaintHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upaintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_text,_paintHandle);
        float __result = (float)__jresult;
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        if (_paintHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_paintHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetEllipsizedWidth(Java.Object handle) [static] :128
int StaticLayout::GetEllipsizedWidth(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetEllipsizedWidth359", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetHeight(Java.Object handle) [static] :116
int StaticLayout::GetHeight(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetHeight360", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineBaseline(Java.Object handle, int line) [static] :134
int StaticLayout::GetLineBaseline1(::g::Java::Object* handle, int line)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineBaseline1361", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uline=line;
        jint _line = (jint)_uline;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_line);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineCount(Java.Object handle) [static] :165
int StaticLayout::GetLineCount(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineCount362", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineEnd(Java.Object handle, int line) [static] :152
int StaticLayout::GetLineEnd1(::g::Java::Object* handle, int line)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineEnd1363", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uline=line;
        jint _line = (jint)_uline;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_line);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static float GetLineLeft(Java.Object handle, int line) [static] :140
float StaticLayout::GetLineLeft1(::g::Java::Object* handle, int line)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineLeft1364", "(Ljava/lang/Object;I)F");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uline=line;
        jint _line = (jint)_uline;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_handle,_line);
        float __result = (float)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineStart(Java.Object handle, int line) [static] :146
int StaticLayout::GetLineStart1(::g::Java::Object* handle, int line)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineStart1365", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uline=line;
        jint _line = (jint)_uline;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_line);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public StaticLayout New(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) [static] :33
StaticLayout* StaticLayout::New2(uString* text, ::g::Fuse::Android::TextPaint* paint, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    StaticLayout* obj2 = (StaticLayout*)uNew(StaticLayout_typeof());
    obj2->ctor_1(text, paint, width, align, spacingMult, spacingAdd, includePad);
    return obj2;
}

// public StaticLayout New(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) [static] :44
StaticLayout* StaticLayout::New3(uString* text, int bufStart, int bufEnd, ::g::Fuse::Android::TextPaint* paint, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    StaticLayout* obj3 = (StaticLayout*)uNew(StaticLayout_typeof());
    obj3->ctor_2(text, bufStart, bufEnd, paint, outerWidth, align, spacingMult, spacingAdd, includePad, truncateAt, ellipsizedWith);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/1.4.2/StatusBarConfig.uno
// --------------------------------------------------------------------

// public sealed class StatusBarConfig :82
// {
// static extern StatusBarConfig() :84
static void StatusBarConfig__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Platform::SystemUI_typeof()->Init();
    ::g::Fuse::Android::StatusBarHelper_typeof()->Init();
    StatusBarConfig::_isVisible_ = true;
    StatusBarConfig::_isVisible_ = ::g::Fuse::Platform::SystemUI::IsTopFrameVisible();
    ::g::Fuse::Android::StatusBarHelper::InstallGlobalListener();
}

static void StatusBarConfig_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Color_typeof(),
        ::g::Fuse::Platform::SystemUI_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), (uintptr_t)&StatusBarConfig::_isVisible_, uFieldFlagsStatic);
}

::g::Fuse::Node_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 6;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Android.StatusBarConfig", options);
    type->fp_build_ = StatusBarConfig_build;
    type->fp_cctor_ = StatusBarConfig__cctor_1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal static extern bool SetStatusBarColor(float4 color) :127
void StatusBarConfig__SetStatusBarColor_fn(::g::Uno::Float4* color, bool* __retval)
{
    *__retval = StatusBarConfig::SetStatusBarColor(*color);
}

// internal static extern void UpdateStatusBar() :132
void StatusBarConfig__UpdateStatusBar_fn()
{
    StatusBarConfig::UpdateStatusBar();
}

bool StatusBarConfig::_isVisible_;

// internal static extern bool SetStatusBarColor(float4 color) [static] :127
bool StatusBarConfig::SetStatusBarColor(::g::Uno::Float4 color)
{
    StatusBarConfig_typeof()->Init();
    return ::g::Fuse::Android::StatusBarHelper::SetStatusBarColor((int)::g::Uno::Color::ToArgb(color));
}

// internal static extern void UpdateStatusBar() [static] :132
void StatusBarConfig::UpdateStatusBar()
{
    StatusBarConfig_typeof()->Init();
    ::g::Fuse::Platform::SystemUI::IsTopFrameVisible(StatusBarConfig::_isVisible_);
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/1.4.2/StatusBarConfig.uno
// --------------------------------------------------------------------

// internal static extern class StatusBarHelper :15
// {
static void StatusBarHelper_build(uType* type)
{
}

uClassType* StatusBarHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.StatusBarHelper", options);
    type->fp_build_ = StatusBarHelper_build;
    return type;
}

// public static void InstallGlobalListener() :42
void StatusBarHelper__InstallGlobalListener_fn()
{
    StatusBarHelper::InstallGlobalListener();
}

// public static bool SetStatusBarColor(int color) :28
void StatusBarHelper__SetStatusBarColor_fn(int* color, bool* __retval)
{
    *__retval = StatusBarHelper::SetStatusBarColor(*color);
}

// public static void InstallGlobalListener() [static] :42
void StatusBarHelper::InstallGlobalListener()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InstallGlobalListener368", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static bool SetStatusBarColor(int color) [static] :28
bool StatusBarHelper::SetStatusBarColor(int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetStatusBarColor370", "(I)Z");
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_color);
        bool __result = (bool)__jresult;
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/1.4.2/.uno/ux13/Fuse.Android.RootGraphicsView.g.uno
// ----------------------------------------------------------------------------------------------

// public partial sealed class RootGraphicsView.Template :7
// {
// static Template() :16
static void RootGraphicsView__Template__cctor__fn(uType* __type)
{
}

static void RootGraphicsView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("AndroidAppearance");
    type->SetFields(2,
        ::g::Fuse::Android::RootGraphicsView_typeof(), offsetof(RootGraphicsView__Template, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Android::RootGraphicsView_typeof(), offsetof(RootGraphicsView__Template, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* RootGraphicsView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RootGraphicsView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.RootGraphicsView.Template", options);
    type->fp_build_ = RootGraphicsView__Template_build;
    type->fp_cctor_ = RootGraphicsView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))RootGraphicsView__Template__New1_fn;
    return type;
}

// public Template(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) :11
void RootGraphicsView__Template__ctor_1_fn(RootGraphicsView__Template* __this, ::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :19
void RootGraphicsView__Template__New1_fn(RootGraphicsView__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Native::Android::SurfaceView* __self1 = ::g::Fuse::Controls::Native::Android::SurfaceView::New5();
    return *__retval = __self1, void();
}

// public Template New(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) :11
void RootGraphicsView__Template__New2_fn(::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance, RootGraphicsView__Template** __retval)
{
    *__retval = RootGraphicsView__Template::New2(parent, parentInstance);
}

// public Template(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) [instance] :11
void RootGraphicsView__Template::ctor_1(::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance)
{
    ctor_(::STRINGS[0/*"AndroidAppe...*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) [static] :11
RootGraphicsView__Template* RootGraphicsView__Template::New2(::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance)
{
    RootGraphicsView__Template* obj1 = (RootGraphicsView__Template*)uNew(RootGraphicsView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/TextRenderer.uno
// ------------------------------------------------------------------------------

// internal sealed extern class TextControlLayout :15
// {
static void TextControlLayout_build(uType* type)
{
    ::STRINGS[1] = uString::Const("wrapWidth");
    ::STRINGS[2] = uString::Const("");
    ::TYPES[3] = ::g::Fuse::ICommonViewport_typeof();
    type->SetDependencies(
        ::g::Fuse::Font_typeof(),
        ::g::Fuse::Controls::Native::Android::TypefaceCache_typeof());
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(TextControlLayout, _cacheWrapWidthPoints), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextControlLayout, _cacheMin), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextControlLayout, _cacheValid), 0,
        ::g::Fuse::Android::StaticLayout_typeof(), offsetof(TextControlLayout, _Layout), 0,
        ::g::Uno::Recti_typeof(), offsetof(TextControlLayout, _PixelBounds), 0);
}

uType* TextControlLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TextControlLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextControlLayout", options);
    type->fp_build_ = TextControlLayout_build;
    type->fp_ctor_ = (void*)TextControlLayout__New1_fn;
    return type;
}

// public generated TextControlLayout() :15
void TextControlLayout__ctor__fn(TextControlLayout* __this)
{
    __this->ctor_();
}

// public void Invalidate() :29
void TextControlLayout__Invalidate_fn(TextControlLayout* __this)
{
    __this->Invalidate();
}

// public generated Fuse.Android.StaticLayout get_Layout() :17
void TextControlLayout__get_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::StaticLayout** __retval)
{
    *__retval = __this->Layout();
}

// private generated void set_Layout(Fuse.Android.StaticLayout value) :17
void TextControlLayout__set_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::StaticLayout* value)
{
    __this->Layout(value);
}

// public bool Measure(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint Paint, float wrapWidthPoints, bool useMin) :34
void TextControlLayout__Measure_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* Paint, float* wrapWidthPoints, bool* useMin, bool* __retval)
{
    *__retval = __this->Measure(Control, Paint, *wrapWidthPoints, *useMin);
}

// public generated TextControlLayout New() :15
void TextControlLayout__New1_fn(TextControlLayout** __retval)
{
    *__retval = TextControlLayout::New1();
}

// public generated Uno.Recti get_PixelBounds() :18
void TextControlLayout__get_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->PixelBounds();
}

// private generated void set_PixelBounds(Uno.Recti value) :18
void TextControlLayout__set_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* value)
{
    __this->PixelBounds(*value);
}

// private Fuse.Android.StaticLayout.Alignment TextAlignmentToAndroidLayoutAlignment(Fuse.Controls.TextAlignment textAlignment) :93
void TextControlLayout__TextAlignmentToAndroidLayoutAlignment_fn(TextControlLayout* __this, int* textAlignment, int* __retval)
{
    *__retval = __this->TextAlignmentToAndroidLayoutAlignment(*textAlignment);
}

// public void UpdatePaint(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint paint) :105
void TextControlLayout__UpdatePaint_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* paint)
{
    __this->UpdatePaint(Control, paint);
}

// public generated TextControlLayout() [instance] :15
void TextControlLayout::ctor_()
{
}

// public void Invalidate() [instance] :29
void TextControlLayout::Invalidate()
{
    _cacheValid = false;
}

// public generated Fuse.Android.StaticLayout get_Layout() [instance] :17
::g::Fuse::Android::StaticLayout* TextControlLayout::Layout()
{
    return _Layout;
}

// private generated void set_Layout(Fuse.Android.StaticLayout value) [instance] :17
void TextControlLayout::Layout(::g::Fuse::Android::StaticLayout* value)
{
    _Layout = value;
}

// public bool Measure(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint Paint, float wrapWidthPoints, bool useMin) [instance] :34
bool TextControlLayout::Measure(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* Paint, float wrapWidthPoints, bool useMin)
{
    uString* ind1;

    if ((((Layout() != NULL) && _cacheValid) && (_cacheWrapWidthPoints == wrapWidthPoints)) && (_cacheMin == useMin))
        return false;

    if (wrapWidthPoints < 0.0f)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[1/*"wrapWidth"*/]));

    float wrapWidthPixels = wrapWidthPoints * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(Control)->Viewport()), ::TYPES[3/*Fuse.ICommonViewport*/]));
    int align = TextAlignmentToAndroidLayoutAlignment(Control->TextAlignment());
    ind1 = Control->RenderValue();
    uString* text = (ind1 != NULL) ? ind1 : ::STRINGS[2/*""*/];
    float lineSpacing = Control->LineSpacing() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(Control->Viewport()), ::TYPES[3/*Fuse.ICommonViewport*/]));
    float desiredWidth = ::g::Fuse::Android::StaticLayout::GetDesiredWidth(text, Paint);

    if (useMin)
        wrapWidthPixels = ::g::Uno::Math::Min1(wrapWidthPixels, desiredWidth);

    int width = (int)::g::Uno::Math::Min1(::g::Uno::Math::Ceil1(wrapWidthPixels), 2.14748365e+09f);

    if (Control->TextWrapping() == 0)
    {
        int layoutWidth = (int)::g::Uno::Math::Ceil1(::g::Uno::Math::Max1(wrapWidthPixels, desiredWidth));
        Layout((uPtr(Control)->TextTruncation() == 0) ? (::g::Fuse::Android::StaticLayout*)::g::Fuse::Android::StaticLayout::New3(text, 0, uPtr(text)->Length(), Paint, layoutWidth, align, 1.0f, lineSpacing, false, 0, width) : (::g::Fuse::Android::StaticLayout*)::g::Fuse::Android::StaticLayout::New2(text, Paint, layoutWidth, align, 1.0f, lineSpacing, false));
    }
    else
        Layout(::g::Fuse::Android::StaticLayout::New2(text, Paint, width, align, 1.0f, lineSpacing, false));

    ::g::Uno::Rect bounds = ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    for (int i = 0; i < uPtr(Layout())->LineCount(); ++i)
    {
        ::g::Uno::Rect rLineBounds = uPtr(Paint)->GetTextBounds1(text, uPtr(Layout())->GetLineStart(i), uPtr(Layout())->GetLineEnd(i));
        ::g::Uno::Rect lineBounds = ::g::Uno::Rect__Translate(rLineBounds, ::g::Uno::Float2__New2(uPtr(Layout())->GetLineLeft(i), (float)uPtr(Layout())->GetLineBaseline(i)));
        bounds = (i == 0) ? lineBounds : ::g::Uno::Rect__Union(bounds, lineBounds);
    }

    ::g::Uno::Int2 min = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Floor2(bounds.Minimum()));
    ::g::Uno::Int2 max = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Ceil2(bounds.Maximum()));
    ::g::Uno::Recti pixelBounds = ::g::Uno::Recti__New1(min.X, min.Y, max.X, max.Y);
    pixelBounds.Right = (pixelBounds.Left + ::g::Uno::Math::Min8(pixelBounds.Size().X, uPtr(Layout())->EllipsizedWidth()));
    PixelBounds(::g::Uno::Recti__Inflate(pixelBounds, 1));
    _cacheValid = true;
    _cacheWrapWidthPoints = wrapWidthPoints;
    _cacheMin = useMin;
    return true;
}

// public generated Uno.Recti get_PixelBounds() [instance] :18
::g::Uno::Recti TextControlLayout::PixelBounds()
{
    return _PixelBounds;
}

// private generated void set_PixelBounds(Uno.Recti value) [instance] :18
void TextControlLayout::PixelBounds(::g::Uno::Recti value)
{
    _PixelBounds = value;
}

// private Fuse.Android.StaticLayout.Alignment TextAlignmentToAndroidLayoutAlignment(Fuse.Controls.TextAlignment textAlignment) [instance] :93
int TextControlLayout::TextAlignmentToAndroidLayoutAlignment(int textAlignment)
{
    switch (textAlignment)
    {
        case 0:
            return 1;
        case 1:
            return 0;
        case 2:
            return 2;
    }

    return 1;
}

// public void UpdatePaint(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint paint) [instance] :105
void TextControlLayout::UpdatePaint(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* paint)
{
    uPtr(paint)->AntiAlias(true);
    paint->Typeface((uPtr(Control)->Font() != ::g::Fuse::Font::PlatformDefault()) ? (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::TypefaceCache::GetTypeface(uPtr(Control)->Font()) : (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::Typeface::Default());
    paint->TextSize(Control->FontSize() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(Control->Viewport()), ::TYPES[3/*Fuse.ICommonViewport*/])));
    paint->Color(Control->TextColor());
}

// public generated TextControlLayout New() [static] :15
TextControlLayout* TextControlLayout::New1()
{
    TextControlLayout* obj2 = (TextControlLayout*)uNew(TextControlLayout_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/Internal/TextPaint.uno
// ------------------------------------------------------------------------------------

// internal sealed extern class TextPaint :14
// {
static void TextPaint_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Int_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Color_typeof());
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(TextPaint, _handle), 0);
}

uType* TextPaint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TextPaint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextPaint", options);
    type->fp_build_ = TextPaint_build;
    type->fp_ctor_ = (void*)TextPaint__New1_fn;
    return type;
}

// public TextPaint() :23
void TextPaint__ctor__fn(TextPaint* __this)
{
    __this->ctor_();
}

// public TextPaint(Java.Object handle) :25
void TextPaint__ctor_1_fn(TextPaint* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// public void set_AntiAlias(bool value) :32
void TextPaint__set_AntiAlias_fn(TextPaint* __this, bool* value)
{
    __this->AntiAlias(*value);
}

// public void set_Color(float4 value) :54
void TextPaint__set_Color_fn(TextPaint* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// private static Java.Object Create() :93
void TextPaint__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextPaint::Create();
}

// private static void GetTextBounds(Java.Object handle, string text, int start, int end, int[] r) :64
void TextPaint__GetTextBounds_fn(::g::Java::Object* handle, uString* text, int* start, int* end, uArray* r)
{
    TextPaint::GetTextBounds(handle, text, *start, *end, r);
}

// public Uno.Rect GetTextBounds(string text, int start, int end) :35
void TextPaint__GetTextBounds1_fn(TextPaint* __this, uString* text, int* start, int* end, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetTextBounds1(text, *start, *end);
}

// public Java.Object get_Handle() :18
void TextPaint__get_Handle_fn(TextPaint* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public TextPaint New() :23
void TextPaint__New1_fn(TextPaint** __retval)
{
    *__retval = TextPaint::New1();
}

// private static void SetAntiAlias(Java.Object handle, bool value) :75
void TextPaint__SetAntiAlias_fn(::g::Java::Object* handle, bool* value)
{
    TextPaint::SetAntiAlias(handle, *value);
}

// private static void SetColor(Java.Object handle, int color) :58
void TextPaint__SetColor_fn(::g::Java::Object* handle, int* color)
{
    TextPaint::SetColor(handle, *color);
}

// private static void SetTextSize(Java.Object handle, float textSize) :87
void TextPaint__SetTextSize_fn(::g::Java::Object* handle, float* textSize)
{
    TextPaint::SetTextSize(handle, *textSize);
}

// private static void SetTypeface(Java.Object paintHandle, Java.Object typefaceHandle) :81
void TextPaint__SetTypeface_fn(::g::Java::Object* paintHandle, ::g::Java::Object* typefaceHandle)
{
    TextPaint::SetTypeface(paintHandle, typefaceHandle);
}

// public void set_TextSize(float value) :49
void TextPaint__set_TextSize_fn(TextPaint* __this, float* value)
{
    __this->TextSize(*value);
}

// public void set_Typeface(Fuse.Controls.Native.Android.Typeface value) :44
void TextPaint__set_Typeface_fn(TextPaint* __this, ::g::Fuse::Controls::Native::Android::Typeface* value)
{
    __this->Typeface(value);
}

// public TextPaint() [instance] :23
void TextPaint::ctor_()
{
    ctor_1(TextPaint::Create());
}

// public TextPaint(Java.Object handle) [instance] :25
void TextPaint::ctor_1(::g::Java::Object* handle)
{
    _handle = handle;
}

// public void set_AntiAlias(bool value) [instance] :32
void TextPaint::AntiAlias(bool value)
{
    TextPaint::SetAntiAlias(Handle(), value);
}

// public void set_Color(float4 value) [instance] :54
void TextPaint::Color(::g::Uno::Float4 value)
{
    TextPaint::SetColor(Handle(), (int)::g::Uno::Color::ToArgb(value));
}

// public Uno.Rect GetTextBounds(string text, int start, int end) [instance] :35
::g::Uno::Rect TextPaint::GetTextBounds1(uString* text, int start, int end)
{
    uArray* r = uArray::New(::TYPES[4/*int[]*/], 4);
    TextPaint::GetTextBounds(Handle(), text, start, end, r);
    return ::g::Uno::Rect__New1((float)r->Item<int>(0), (float)r->Item<int>(1), (float)r->Item<int>(2), (float)r->Item<int>(3));
}

// public Java.Object get_Handle() [instance] :18
::g::Java::Object* TextPaint::Handle()
{
    return _handle;
}

// public void set_TextSize(float value) [instance] :49
void TextPaint::TextSize(float value)
{
    TextPaint::SetTextSize(Handle(), value);
}

// public void set_Typeface(Fuse.Controls.Native.Android.Typeface value) [instance] :44
void TextPaint::Typeface(::g::Fuse::Controls::Native::Android::Typeface* value)
{
    TextPaint::SetTypeface(Handle(), uPtr(value)->Handle());
}

// private static Java.Object Create() [static] :93
::g::Java::Object* TextPaint::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create371", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void GetTextBounds(Java.Object handle, string text, int start, int end, int[] r) [static] :64
void TextPaint::GetTextBounds(::g::Java::Object* handle, uString* text, int start, int end, uArray* r)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetTextBounds372", "(Ljava/lang/Object;Ljava/lang/String;IILcom/uno/IntArray;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        int _ustart=start;
        jint _start = (jint)_ustart;
        int _uend=end;
        jint _end = (jint)_uend;
        uArray* _ur=r;
        jobject _r = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_ur);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text,_start,_end,_r);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        
        
        if (_r!=NULL) { U_JNIVAR->DeleteLocalRef(_r); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextPaint New() [static] :23
TextPaint* TextPaint::New1()
{
    TextPaint* obj1 = (TextPaint*)uNew(TextPaint_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void SetAntiAlias(Java.Object handle, bool value) [static] :75
void TextPaint::SetAntiAlias(::g::Java::Object* handle, bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetAntiAlias373", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetColor(Java.Object handle, int color) [static] :58
void TextPaint::SetColor(::g::Java::Object* handle, int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetColor374", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextSize(Java.Object handle, float textSize) [static] :87
void TextPaint::SetTextSize(::g::Java::Object* handle, float textSize)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextSize375", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _utextSize=textSize;
        jfloat _textSize = (jfloat)_utextSize;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_textSize);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTypeface(Java.Object paintHandle, Java.Object typefaceHandle) [static] :81
void TextPaint::SetTypeface(::g::Java::Object* paintHandle, ::g::Java::Object* typefaceHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTypeface376", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _upaintHandle=paintHandle;
        jobject _paintHandle = (_upaintHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upaintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _utypefaceHandle=typefaceHandle;
        jobject _typefaceHandle = (_utypefaceHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_utypefaceHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_paintHandle,_typefaceHandle);
        
        if (_paintHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_paintHandle); }
        if (_typefaceHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_typefaceHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/TextRenderer.uno
// ------------------------------------------------------------------------------

// internal sealed extern class TextRenderer :117
// {
static void TextRenderer_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Android::Bitmap_typeof(),
        ::g::Fuse::Android::Blitter_typeof(),
        ::g::Fuse::GraphicsWorker_typeof());
    type->SetInterfaces(
        ::g::Fuse::Controls::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(TextRenderer, _control), 0,
        ::g::Fuse::Android::TextPaint_typeof(), offsetof(TextRenderer, _paint), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(TextRenderer, _textLayout), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(TextRenderer, _measureLayout), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextRenderer, _renderThreaded), 0,
        ::g::Uno::Float2_typeof(), offsetof(TextRenderer, _arrangePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(TextRenderer, _arrangeSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextRenderer, _emitNewTexture), 0,
        ::g::Uno::ULong_typeof(), offsetof(TextRenderer, _wantedVersion), 0,
        ::g::Uno::ULong_typeof(), offsetof(TextRenderer, _textureVersion), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(TextRenderer, _texture), 0);
}

TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.Android.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Visual*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    return type;
}

// private TextRenderer(Fuse.Controls.TextControl Control) :125
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* Control)
{
    __this->ctor_(Control);
}

// public void Arrange(float2 position, float2 size) :144
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// public static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control) :119
void TextRenderer__Create_fn(::g::Fuse::Controls::TextControl* control, uObject** __retval)
{
    *__retval = TextRenderer::Create(control);
}

// private void DisposeTexture() :219
void TextRenderer__DisposeTexture_fn(TextRenderer* __this)
{
    __this->DisposeTexture();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) :344
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    __this->Draw(dc, where);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) :176
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// public Uno.Rect GetRenderBounds() :196
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// public void Invalidate() :163
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// private TextRenderer New(Fuse.Controls.TextControl Control) :125
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* Control, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(Control);
}

// private void OnBitmapDraw(Fuse.DrawContext dc, Fuse.Visual where, float2 dposition, float2 size) :319
void TextRenderer__OnBitmapDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Float2* dposition, ::g::Uno::Float2* size)
{
    __this->OnBitmapDraw(dc, where, *dposition, *size);
}

// private void PrepareDraw() :227
void TextRenderer__PrepareDraw_fn(TextRenderer* __this)
{
    __this->PrepareDraw();
}

// private void SetTexture(texture2D newTexture) :210
void TextRenderer__SetTexture_fn(TextRenderer* __this, ::g::Uno::Graphics::Texture2D* newTexture)
{
    __this->SetTexture(newTexture);
}

// public void SoftDispose() :170
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

// private void UpdateLayout() :151
void TextRenderer__UpdateLayout_fn(TextRenderer* __this)
{
    __this->UpdateLayout();
}

// private void UpdatePaint() :131
void TextRenderer__UpdatePaint_fn(TextRenderer* __this)
{
    __this->UpdatePaint();
}

// private texture2D UpdateTexture(Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) :261
void TextRenderer__UpdateTexture_fn(TextRenderer* __this, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti* pixelBounds, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->UpdateTexture(layout, *pixelBounds);
}

// private TextRenderer(Fuse.Controls.TextControl Control) [instance] :125
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* Control)
{
    _textLayout = ::g::Fuse::Android::TextControlLayout::New1();
    _emitNewTexture = true;
    _control = Control;
}

// public void Arrange(float2 position, float2 size) [instance] :144
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    _arrangePosition = position;
    _arrangeSize = size;
    UpdateLayout();
}

// private void DisposeTexture() [instance] :219
void TextRenderer::DisposeTexture()
{
    SetTexture(NULL);
    _textureVersion = 0ULL;
    _wantedVersion = 0ULL;
    _emitNewTexture = true;
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) [instance] :344
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    PrepareDraw();
    OnBitmapDraw(dc, where, _arrangePosition, _arrangeSize);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance] :176
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    if (_measureLayout == NULL)
        _measureLayout = ::g::Fuse::Android::TextControlLayout::New1();

    if (_paint == NULL)
        _paint = ::g::Fuse::Android::TextPaint::New1();

    float wrapWidth = lp.HasX() ? lp.X() : FLT_INF;

    if (lp.HasMaxX())
        wrapWidth = ::g::Uno::Math::Min1(wrapWidth, lp.MaxX());

    UpdatePaint();
    uPtr(_measureLayout)->Measure(_control, _paint, wrapWidth, true);
    ::g::Uno::Float2 q = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(uPtr(_measureLayout)->Layout())->EllipsizedWidth(), (float)uPtr(uPtr(_measureLayout)->Layout())->Height()), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[3/*Fuse.ICommonViewport*/])));
    return q;
}

// public Uno.Rect GetRenderBounds() [instance] :196
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    UpdateLayout();
    return ::g::Uno::Rect__Translate(::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Position()), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[3/*Fuse.ICommonViewport*/]))), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Size()), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[3/*Fuse.ICommonViewport*/])))), _arrangePosition);
}

// public void Invalidate() [instance] :163
void TextRenderer::Invalidate()
{
    uPtr(_textLayout)->Invalidate();

    if (_measureLayout != NULL)
        uPtr(_measureLayout)->Invalidate();
}

// private void OnBitmapDraw(Fuse.DrawContext dc, Fuse.Visual where, float2 dposition, float2 size) [instance] :319
void TextRenderer::OnBitmapDraw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Float2 dposition, ::g::Uno::Float2 size)
{
    if ((_textureVersion != _wantedVersion) || (_texture == NULL))
        return;

    ::g::Uno::Int2 pixelSize = uPtr(_textLayout)->PixelBounds().Size();
    ::g::Uno::Float2 pointSize = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[3/*Fuse.ICommonViewport*/])));
    ::g::Uno::Float2 position = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Position()), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[3/*Fuse.ICommonViewport*/]))), dposition);
    ::g::Uno::Float4x4 m = uPtr(dc)->GetLocalToClipTransform(where);
    uPtr(::g::Fuse::Android::Blitter::Singleton_)->Blit(_texture, position, pointSize, m);
}

// private void PrepareDraw() [instance] :227
void TextRenderer::PrepareDraw()
{
    UpdateLayout();

    if (!_emitNewTexture)
        return;

    _wantedVersion++;
    ::g::Uno::Recti pixelBounds = uPtr(_textLayout)->PixelBounds();

    if ((pixelBounds.Size().X <= 0) || (pixelBounds.Size().Y <= 0))
    {
        SetTexture(NULL);
        return;
    }

    if (_renderThreaded)
    {
        TextRenderer__BackgroundRender* backgroundRender = TextRenderer__BackgroundRender::New1(this, _wantedVersion, uPtr(_textLayout)->Layout(), pixelBounds);
        ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__UpdateTextureAsync_fn, backgroundRender));
    }
    else
    {
        SetTexture(UpdateTexture(uPtr(_textLayout)->Layout(), pixelBounds));
        _textureVersion = _wantedVersion;
    }

    _emitNewTexture = false;
}

// private void SetTexture(texture2D newTexture) [instance] :210
void TextRenderer::SetTexture(::g::Uno::Graphics::Texture2D* newTexture)
{
    if (_texture != NULL)
        uPtr(_texture)->Dispose();

    _texture = newTexture;
    uPtr(_control)->InvalidateVisual();
}

// public void SoftDispose() [instance] :170
void TextRenderer::SoftDispose()
{
    DisposeTexture();
    _paint = NULL;
}

// private void UpdateLayout() [instance] :151
void TextRenderer::UpdateLayout()
{
    UpdatePaint();

    if (uPtr(_textLayout)->Measure(_control, _paint, _arrangeSize.X, false))
        _emitNewTexture = true;

    int textLength = ::g::Uno::String::op_Inequality(uPtr(_control)->RenderValue(), NULL) ? uPtr(uPtr(_control)->RenderValue())->Length() : 0;
    _renderThreaded = (textLength > 50);
}

// private void UpdatePaint() [instance] :131
void TextRenderer::UpdatePaint()
{
    if (_paint == NULL)
        _paint = ::g::Fuse::Android::TextPaint::New1();

    uPtr(_textLayout)->UpdatePaint(_control, _paint);
}

// private texture2D UpdateTexture(Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) [instance] :261
::g::Uno::Graphics::Texture2D* TextRenderer::UpdateTexture(::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti pixelBounds)
{
    ::g::Fuse::Android::Bitmap* bitmap = ::g::Fuse::Android::Bitmap::CreateBitmapARGB8888(pixelBounds.Size().X, pixelBounds.Size().Y);
    ::g::Fuse::Android::Canvas* canvas = ::g::Fuse::Android::Canvas::New1(bitmap);
    canvas->Translate((float)-pixelBounds.Position().X, (float)-pixelBounds.Position().Y);
    uPtr(bitmap)->EraseColor(::g::Uno::Float4__New1(0.0f));
    uPtr(layout)->Draw(canvas);
    ::g::Uno::Graphics::Texture2D* texture = ::g::Uno::Graphics::Texture2D::New1(pixelBounds.Size(), 3, false);
    ::g::OpenGL::GL::BindTexture(3553, texture->GLTextureHandle());
    ::g::Fuse::Android::GLUtils::TexImage2D1(3553, 0, bitmap, 0);
    ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
    bitmap->Recycle();
    return texture;
}

// public static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control) [static] :119
uObject* TextRenderer::Create(::g::Fuse::Controls::TextControl* control)
{
    return (uObject*)TextRenderer::New1(control);
}

// private TextRenderer New(Fuse.Controls.TextControl Control) [static] :125
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* Control)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(Control);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/Internal/TextUtils.uno
// ------------------------------------------------------------------------------------

// internal sealed extern class TextUtils :12
// {
static void TextUtils_build(uType* type)
{
}

uType* TextUtils_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextUtils);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextUtils", options);
    type->fp_build_ = TextUtils_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android.TextRenderer/1.4.2/Internal/TextUtils.uno
// ------------------------------------------------------------------------------------

// public enum TextUtils.TruncateAt :14
uEnumType* TextUtils__TruncateAt_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Android.TextUtils.TruncateAt", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "End", 0LL,
        "Marquee", 1LL,
        "Middle", 2LL,
        "Start", 3LL);
    return type;
}

}}} // ::g::Fuse::Android

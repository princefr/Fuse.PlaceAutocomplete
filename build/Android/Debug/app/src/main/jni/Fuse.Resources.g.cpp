// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Http.Htt-2465a87a.h>
#include <Experimental.Http.HttpLoader.h>
#include <Experimental.TextureL-b6dfce5c.h>
#include <Fuse.AppBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.DisposalRequest.h>
#include <Fuse.Resources.Exif.ExifData.h>
#include <Fuse.Resources.Exif.I-cf73dc79.h>
#include <Fuse.Resources.FileIm-3dfab082.h>
#include <Fuse.Resources.FileIm-450e0bee.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.FileIm-b247fd74.h>
#include <Fuse.Resources.FileResource.h>
#include <Fuse.Resources.HttpIm-93bb70f8.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.HttpIm-c131ad92.h>
#include <Fuse.Resources.HttpIm-cfc77adc.h>
#include <Fuse.Resources.ImageS-355caaa1.h>
#include <Fuse.Resources.ImageS-87193ac7.h>
#include <Fuse.Resources.ImageS-a985306c.h>
#include <Fuse.Resources.ImageS-d58bb329.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.IMemoryResource.h>
#include <Fuse.Resources.ISoftDisposable.h>
#include <Fuse.Resources.Loadin-4ba1d630.h>
#include <Fuse.Resources.Loadin-51208ece.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Resources.MultiD-7688643f.h>
#include <Fuse.Resources.ProxyI-8b63b1ea.h>
#include <Fuse.Resources.Resour-fabdcc8b.h>
#include <Fuse.Resources.System-1e583f40.h>
#include <Fuse.Resources.Textur-749306c5.h>
#include <Fuse.Scripting.IEvent-434826af.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <OpenGL.GL.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Collections.Obser-ca008b9a.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Stream.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.WeakReference-1.h>
#include <Uno/Graphics/GLHelper.h>
static uString* STRINGS[6];
static uType* TYPES[27];

namespace g{
namespace Fuse{
namespace Resources{

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/FileImageSource.uno
// -------------------------------------------------------------------------------

// private sealed class FileImageSourceImpl.BackgroundLoad :243
// {
static void FileImageSourceImpl__BackgroundLoad_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Resources::Exif::ExifData_typeof(),
        ::g::Fuse::GraphicsWorker_typeof());
    type->SetFields(0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(FileImageSourceImpl__BackgroundLoad, _file), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), NULL), offsetof(FileImageSourceImpl__BackgroundLoad, _done), 0,
        ::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), offsetof(FileImageSourceImpl__BackgroundLoad, _fail), 0,
        ::TYPES[1/*Uno.Exception*/], offsetof(FileImageSourceImpl__BackgroundLoad, _exception), 0,
        ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), offsetof(FileImageSourceImpl__BackgroundLoad, _orientation), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(FileImageSourceImpl__BackgroundLoad, _tex), 0);
}

uType* FileImageSourceImpl__BackgroundLoad_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(FileImageSourceImpl__BackgroundLoad);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", options);
    type->fp_build_ = FileImageSourceImpl__BackgroundLoad_build;
    return type;
}

// public BackgroundLoad(Uno.UX.FileSource file, Uno.Action<texture2D, Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) :251
void FileImageSourceImpl__BackgroundLoad__ctor__fn(FileImageSourceImpl__BackgroundLoad* __this, ::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    __this->ctor_(file, done, fail);
}

// private void GWDoneCallback(texture2D tex) :275
void FileImageSourceImpl__BackgroundLoad__GWDoneCallback_fn(FileImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Graphics::Texture2D* tex)
{
    __this->GWDoneCallback(tex);
}

// public BackgroundLoad New(Uno.UX.FileSource file, Uno.Action<texture2D, Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) :251
void FileImageSourceImpl__BackgroundLoad__New1_fn(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail, FileImageSourceImpl__BackgroundLoad** __retval)
{
    *__retval = FileImageSourceImpl__BackgroundLoad::New1(file, done, fail);
}

// public void Run() :259
void FileImageSourceImpl__BackgroundLoad__Run_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->Run();
}

// private void UIDoneCallback() :284
void FileImageSourceImpl__BackgroundLoad__UIDoneCallback_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIDoneCallback();
}

// private void UIFailCallback() :289
void FileImageSourceImpl__BackgroundLoad__UIFailCallback_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIFailCallback();
}

// public BackgroundLoad(Uno.UX.FileSource file, Uno.Action<texture2D, Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) [instance] :251
void FileImageSourceImpl__BackgroundLoad::ctor_(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    _file = file;
    _done = done;
    _fail = fail;
    ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__Run_fn, this));
}

// private void GWDoneCallback(texture2D tex) [instance] :275
void FileImageSourceImpl__BackgroundLoad::GWDoneCallback(::g::Uno::Graphics::Texture2D* tex)
{
    ::g::OpenGL::GL::Finish();
    _tex = tex;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__UIDoneCallback_fn, this));
}

// public void Run() [instance] :259
void FileImageSourceImpl__BackgroundLoad::Run()
{
    try
    {
        {
            uArray* data = uPtr(_file)->ReadAllBytes();
            _orientation = ::g::Fuse::Resources::Exif::ExifData__FromByteArray(data).Orientation;
            ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer::New1(data), uPtr(_file)->Name, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)FileImageSourceImpl__BackgroundLoad__GWDoneCallback_fn, this));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        _exception = e;
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__UIFailCallback_fn, this));
    }
}

// private void UIDoneCallback() [instance] :284
void FileImageSourceImpl__BackgroundLoad::UIDoneCallback()
{
    uPtr(_done)->Invoke(2, (::g::Uno::Graphics::Texture2D*)_tex, uCRef<int>(_orientation));
}

// private void UIFailCallback() [instance] :289
void FileImageSourceImpl__BackgroundLoad::UIFailCallback()
{
    ::g::Uno::Exception* e = _exception;
    _exception = NULL;
    uPtr(_fail)->InvokeVoid(e);
}

// public BackgroundLoad New(Uno.UX.FileSource file, Uno.Action<texture2D, Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) [static] :251
FileImageSourceImpl__BackgroundLoad* FileImageSourceImpl__BackgroundLoad::New1(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    FileImageSourceImpl__BackgroundLoad* obj1 = (FileImageSourceImpl__BackgroundLoad*)uNew(FileImageSourceImpl__BackgroundLoad_typeof());
    obj1->ctor_(file, done, fail);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/HttpImageSource.uno
// -------------------------------------------------------------------------------

// private sealed class HttpImageSourceImpl.BackgroundLoad :160
// {
static void HttpImageSourceImpl__BackgroundLoad_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::GraphicsWorker_typeof());
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(HttpImageSourceImpl__BackgroundLoad, _data), 0,
        ::g::Uno::String_typeof(), offsetof(HttpImageSourceImpl__BackgroundLoad, _contentType), 0,
        ::TYPES[2/*Uno.Action<texture2D>*/], offsetof(HttpImageSourceImpl__BackgroundLoad, _done), 0,
        ::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), offsetof(HttpImageSourceImpl__BackgroundLoad, _fail), 0,
        ::TYPES[1/*Uno.Exception*/], offsetof(HttpImageSourceImpl__BackgroundLoad, _exception), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(HttpImageSourceImpl__BackgroundLoad, _tex), 0);
}

uType* HttpImageSourceImpl__BackgroundLoad_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HttpImageSourceImpl__BackgroundLoad);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", options);
    type->fp_build_ = HttpImageSourceImpl__BackgroundLoad_build;
    return type;
}

// public BackgroundLoad(byte[] data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :167
void HttpImageSourceImpl__BackgroundLoad__ctor__fn(HttpImageSourceImpl__BackgroundLoad* __this, uArray* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    __this->ctor_(data, contentType, done, fail);
}

// private void GWDoneCallback(texture2D tex) :190
void HttpImageSourceImpl__BackgroundLoad__GWDoneCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Graphics::Texture2D* tex)
{
    __this->GWDoneCallback(tex);
}

// public BackgroundLoad New(byte[] data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :167
void HttpImageSourceImpl__BackgroundLoad__New1_fn(uArray* data, uString* contentType, uDelegate* done, uDelegate* fail, HttpImageSourceImpl__BackgroundLoad** __retval)
{
    *__retval = HttpImageSourceImpl__BackgroundLoad::New1(data, contentType, done, fail);
}

// public void Run() :176
void HttpImageSourceImpl__BackgroundLoad__Run_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->Run();
}

// private void UIDoneCallback() :199
void HttpImageSourceImpl__BackgroundLoad__UIDoneCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIDoneCallback();
}

// private void UIFailCallback() :204
void HttpImageSourceImpl__BackgroundLoad__UIFailCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIFailCallback();
}

// public BackgroundLoad(byte[] data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [instance] :167
void HttpImageSourceImpl__BackgroundLoad::ctor_(uArray* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    _data = data;
    _contentType = contentType;
    _done = done;
    _fail = fail;
    ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__Run_fn, this));
}

// private void GWDoneCallback(texture2D tex) [instance] :190
void HttpImageSourceImpl__BackgroundLoad::GWDoneCallback(::g::Uno::Graphics::Texture2D* tex)
{
    ::g::OpenGL::GL::Finish();
    _tex = tex;
    ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__UIDoneCallback_fn, this), 0);
}

// public void Run() [instance] :176
void HttpImageSourceImpl__BackgroundLoad::Run()
{
    try
    {
        {
            ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DContentType(::g::Uno::Buffer::New1(_data), _contentType, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)HttpImageSourceImpl__BackgroundLoad__GWDoneCallback_fn, this));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        _exception = e;
        ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__UIFailCallback_fn, this), 0);
    }
}

// private void UIDoneCallback() [instance] :199
void HttpImageSourceImpl__BackgroundLoad::UIDoneCallback()
{
    uPtr(_done)->InvokeVoid(_tex);
}

// private void UIFailCallback() [instance] :204
void HttpImageSourceImpl__BackgroundLoad::UIFailCallback()
{
    ::g::Uno::Exception* e = _exception;
    _exception = NULL;
    uPtr(_fail)->InvokeVoid(e);
}

// public BackgroundLoad New(byte[] data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [static] :167
HttpImageSourceImpl__BackgroundLoad* HttpImageSourceImpl__BackgroundLoad::New1(uArray* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    HttpImageSourceImpl__BackgroundLoad* obj1 = (HttpImageSourceImpl__BackgroundLoad*)uNew(HttpImageSourceImpl__BackgroundLoad_typeof());
    obj1->ctor_(data, contentType, done, fail);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/LoadingImageSource.uno
// ----------------------------------------------------------------------------------

// protected enum LoadingImageSource.CleanupReason :10
uEnumType* LoadingImageSource__CleanupReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.LoadingImageSource.CleanupReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "Failed", 1LL,
        "Disposed", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.4.2/Resources/DisposalManager.uno
// -----------------------------------------------------------------------------

// internal static class DisposalManager :7
// {
// static generated DisposalManager() :7
static void DisposalManager__cctor__fn(uType* __type)
{
    DisposalManager::_items_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.Resources.IMemoryResource>*/]));
    DisposalManager::_softDisposables_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Fuse.Resources.ISoftDisposable>*/]));
}

static void DisposalManager_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::IMemoryResource_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::ISoftDisposable_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Resources::IMemoryResource_typeof();
    ::TYPES[6] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::TYPES[3/*Uno.Collections.List<Fuse.Resources.IMemoryResource>*/], (uintptr_t)&DisposalManager::_items_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&DisposalManager::_actionAdded_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&DisposalManager::_disposeAt_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.List<Fuse.Resources.ISoftDisposable>*/], (uintptr_t)&DisposalManager::_softDisposables_, uFieldFlagsStatic);
}

uClassType* DisposalManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.DisposalManager", options);
    type->fp_build_ = DisposalManager_build;
    type->fp_cctor_ = DisposalManager__cctor__fn;
    return type;
}

// public static void Add(Fuse.Resources.IMemoryResource item) :18
void DisposalManager__Add_fn(uObject* item)
{
    DisposalManager::Add(item);
}

// public static void Add(Fuse.Resources.ISoftDisposable item) :101
void DisposalManager__Add1_fn(uObject* item)
{
    DisposalManager::Add1(item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr) :75
void DisposalManager__Clean_fn(int* dr)
{
    DisposalManager::Clean(*dr);
}

// public static void Remove(Fuse.Resources.IMemoryResource item) :29
void DisposalManager__Remove_fn(uObject* item)
{
    DisposalManager::Remove(item);
}

// private static void Update() :54
void DisposalManager__Update_fn()
{
    DisposalManager::Update();
}

// private static void VerifyAttach() :37
void DisposalManager__VerifyAttach_fn()
{
    DisposalManager::VerifyAttach();
}

uSStrong< ::g::Uno::Collections::List*> DisposalManager::_items_;
bool DisposalManager::_actionAdded_;
int DisposalManager::_disposeAt_;
uSStrong< ::g::Uno::Collections::List*> DisposalManager::_softDisposables_;

// public static void Add(Fuse.Resources.IMemoryResource item) [static] :18
void DisposalManager::Add(uObject* item)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_items_), item);
    DisposalManager::VerifyAttach();
}

// public static void Add(Fuse.Resources.ISoftDisposable item) [static] :101
void DisposalManager::Add1(uObject* item)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_softDisposables_), item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr) [static] :75
void DisposalManager::Clean(int dr)
{
    uObject* ret1;
    uObject* ret2;

    for (int i = uPtr(DisposalManager::_items_)->Count() - 1; i >= 0; --i)
    {
        if (i >= uPtr(DisposalManager::_items_)->Count())
            continue;

        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items_), uCRef<int>(i), &ret1), ret1);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(dr, item))
            continue;

        uPtr(DisposalManager::_items_)->RemoveAt(i);
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));
    }

    if ((dr == 1) || (dr == 2))

        for (int i1 = 0; i1 < uPtr(DisposalManager::_softDisposables_)->Count(); ++i1)
            ::g::Fuse::Resources::ISoftDisposable::SoftDispose(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_softDisposables_), uCRef<int>(i1), &ret2), ret2)), ::TYPES[6/*Fuse.Resources.ISoftDisposable*/]));
}

// public static void Remove(Fuse.Resources.IMemoryResource item) [static] :29
void DisposalManager::Remove(uObject* item)
{
    bool ret3;

    if ((::g::Uno::Collections::List__Remove_fn(uPtr(DisposalManager::_items_), item, &ret3), ret3))
        DisposalManager::VerifyAttach();
}

// private static void Update() [static] :54
void DisposalManager::Update()
{
    uObject* ret5;

    for (int i = 0; i < 2; ++i)
    {
        if (uPtr(DisposalManager::_items_)->Count() == 0)
            return;

        DisposalManager::_disposeAt_++;

        if (DisposalManager::_disposeAt_ >= uPtr(DisposalManager::_items_)->Count())
            DisposalManager::_disposeAt_ = 0;

        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items_), uCRef<int>(DisposalManager::_disposeAt_), &ret5), ret5);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(0, item))
            continue;

        uPtr(DisposalManager::_items_)->RemoveAt(DisposalManager::_disposeAt_);
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));
    }
}

// private static void VerifyAttach() [static] :37
void DisposalManager::VerifyAttach()
{
    bool on = uPtr(DisposalManager::_items_)->Count() > 0;

    if (on == DisposalManager::_actionAdded_)
        return;

    if (on)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);

    DisposalManager::_actionAdded_ = on;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.4.2/Resources/IDeferredDisposable.uno
// ---------------------------------------------------------------------------------

// public enum DisposalRequest :6
uEnumType* DisposalRequest_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.DisposalRequest", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Regular", 0LL,
        "Background", 1LL,
        "LowMemory", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/FileImageSource.uno
// -------------------------------------------------------------------------------

// public sealed class FileImageSource :67
// {
static void FileImageSource_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[8] = ::g::Fuse::Resources::FileImageSourceImpl_typeof();
    type->SetDependencies(
        ::g::Fuse::Resources::FileImageSourceCache_typeof());
    type->SetFields(4,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(FileImageSource, _proxy), 0);
}

::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.FileImageSource", options);
    type->fp_build_ = FileImageSource_build;
    type->fp_ctor_ = (void*)FileImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))FileImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__OnPinChanged_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int*))FileImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))FileImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))FileImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))FileImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))FileImageSource__get_State_fn;
    return type;
}

// public FileImageSource() :100
void FileImageSource__ctor_2_fn(FileImageSource* __this)
{
    __this->ctor_2();
}

// public FileImageSource(Uno.UX.FileSource file) :94
void FileImageSource__ctor_3_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_3(file);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) :107
void FileImageSource__set_DefaultPolicy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density() :138
void FileImageSource__get_Density_fn(FileImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :138
void FileImageSource__set_Density_fn(FileImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public Uno.UX.FileSource get_File() :76
void FileImageSource__get_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :77
void FileImageSource__set_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public override sealed texture2D GetTexture() :131
void FileImageSource__GetTexture_fn(FileImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public FileImageSource New() :100
void FileImageSource__New2_fn(FileImageSource** __retval)
{
    *__retval = FileImageSource::New2();
}

// public FileImageSource New(Uno.UX.FileSource file) :94
void FileImageSource__New3_fn(::g::Uno::UX::FileSource* file, FileImageSource** __retval)
{
    *__retval = FileImageSource::New3(file);
}

// protected override sealed void OnPinChanged() :126
void FileImageSource__OnPinChanged_fn(FileImageSource* __this)
{
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :127
void FileImageSource__get_Orientation_fn(FileImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Orientation(), void();
}

// public override sealed int2 get_PixelSize() :129
void FileImageSource__get_PixelSize_fn(FileImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public override sealed void Reload() :132
void FileImageSource__Reload_fn(FileImageSource* __this)
{
    uPtr(__this->_proxy)->Reload();
}

// public override sealed float2 get_Size() :128
void FileImageSource__get_Size_fn(FileImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :133
void FileImageSource__get_SizeDensity_fn(FileImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :130
void FileImageSource__get_State_fn(FileImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public FileImageSource() [instance] :100
void FileImageSource::ctor_2()
{
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// public FileImageSource(Uno.UX.FileSource file) [instance] :94
void FileImageSource::ctor_3(::g::Uno::UX::FileSource* file)
{
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
    File(file);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance] :107
void FileImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uPtr(_proxy)->DefaultSetPolicy(value);
}

// public float get_Density() [instance] :138
float FileImageSource::Density()
{
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance] :138
void FileImageSource::Density(float value)
{
    uPtr(_proxy)->Density(value);
}

// public Uno.UX.FileSource get_File() [instance] :76
::g::Uno::UX::FileSource* FileImageSource::File()
{
    return (uPtr(_proxy)->Impl() == NULL) ? uCast< ::g::Uno::UX::FileSource*>(NULL, ::TYPES[7/*Uno.UX.FileSource*/]) : (::g::Uno::UX::FileSource*)uPtr(uAs< ::g::Fuse::Resources::FileImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[8/*Fuse.Resources.FileImageSourceImpl*/]))->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :77
void FileImageSource::File(::g::Uno::UX::FileSource* value)
{
    uPtr(_proxy)->Release();

    if (value == NULL)
        return;

    ::g::Fuse::Resources::FileImageSourceImpl* bf = ::g::Fuse::Resources::FileImageSourceCache::GetFileSource(value);
    uPtr(_proxy)->Attach(bf);
}

// public FileImageSource New() [static] :100
FileImageSource* FileImageSource::New2()
{
    FileImageSource* obj2 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj2->ctor_2();
    return obj2;
}

// public FileImageSource New(Uno.UX.FileSource file) [static] :94
FileImageSource* FileImageSource::New3(::g::Uno::UX::FileSource* file)
{
    FileImageSource* obj1 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj1->ctor_3(file);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/FileImageSource.uno
// -------------------------------------------------------------------------------

// internal static class FileImageSourceCache :11
// {
// static generated FileImageSourceCache() :11
static void FileImageSourceCache__cctor__fn(uType* __type)
{
    FileImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>*/]));
}

static void FileImageSourceCache_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof(), NULL), NULL);
    ::TYPES[10] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[9/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>*/], (uintptr_t)&FileImageSourceCache::_cache_, uFieldFlagsStatic);
}

uClassType* FileImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.FileImageSourceCache", options);
    type->fp_build_ = FileImageSourceCache_build;
    type->fp_cctor_ = FileImageSourceCache__cctor__fn;
    return type;
}

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file) :15
void FileImageSourceCache__GetFileSource_fn(::g::Uno::UX::FileSource* file, ::g::Fuse::Resources::FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceCache::GetFileSource(file);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FileImageSourceCache::_cache_;

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file) [static] :15
::g::Fuse::Resources::FileImageSourceImpl* FileImageSourceCache::GetFileSource(::g::Uno::UX::FileSource* file)
{
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FileImageSourceCache::_cache_), file, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::FileImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
            return his;

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(FileImageSourceCache::_cache_), file, &ret2);
    }

    ::g::Fuse::Resources::FileImageSourceImpl* nv = ::g::Fuse::Resources::FileImageSourceImpl::New2(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(FileImageSourceCache::_cache_), file, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[10/*Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>*/], nv));
    return nv;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/FileImageSource.uno
// -------------------------------------------------------------------------------

// internal sealed class FileImageSourceImpl :142
// {
// ~FileImageSourceImpl() :161
static void FileImageSourceImpl__Finalize_fn(FileImageSourceImpl* __this)
{
    uPtr(__this->_file)->remove_DataChanged(uDelegate::New(::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL), (void*)FileImageSourceImpl__OnDataChanged_fn, __this));
}

static void FileImageSourceImpl_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Resources::Exif::ExifData_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(12,
        ::g::Uno::UX::FileSource_typeof(), offsetof(FileImageSourceImpl, _file), 0,
        ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), offsetof(FileImageSourceImpl, _orientation), 0);
}

::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::LoadingImageSource_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.FileImageSourceImpl", options);
    type->fp_build_ = FileImageSourceImpl_build;
    type->fp_Finalize = (void(*)(uObject*))FileImageSourceImpl__Finalize_fn;
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))FileImageSourceImpl__AttemptLoad_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int*))FileImageSourceImpl__get_Orientation_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public FileImageSourceImpl(Uno.UX.FileSource file) :152
void FileImageSourceImpl__ctor_3_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_3(file);
}

// protected override sealed void AttemptLoad() :215
void FileImageSourceImpl__AttemptLoad_fn(FileImageSourceImpl* __this)
{
    if (uPtr(__this->Policy())->BundlePreload())
    {
        __this->SyncLoad();
        return;
    }

    __this->_loading = true;
    FileImageSourceImpl__BackgroundLoad::New1(__this->_file, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::TYPES[23/*texture2D*/], ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), NULL), (void*)FileImageSourceImpl__SuccessCallback_fn, __this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), (void*)FileImageSourceImpl__FailureCallback_fn, __this));
    __this->OnChanged();
}

// private void FailureCallback(Uno.Exception e) :235
void FileImageSourceImpl__FailureCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Exception* e)
{
    __this->FailureCallback(e);
}

// public Uno.UX.FileSource get_File() :149
void FileImageSourceImpl__get_File_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public FileImageSourceImpl New(Uno.UX.FileSource file) :152
void FileImageSourceImpl__New2_fn(::g::Uno::UX::FileSource* file, FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceImpl::New2(file);
}

// private void OnDataChanged(object s, object a) :166
void FileImageSourceImpl__OnDataChanged_fn(FileImageSourceImpl* __this, uObject* s, uObject* a)
{
    __this->OnDataChanged(s, a);
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :212
void FileImageSourceImpl__get_Orientation_fn(FileImageSourceImpl* __this, int* __retval)
{
    return *__retval = __this->_orientation, void();
}

// private void SuccessCallback(texture2D texture, Fuse.Resources.Exif.ImageOrientation orientation) :228
void FileImageSourceImpl__SuccessCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture, int* orientation)
{
    __this->SuccessCallback(texture, *orientation);
}

// public void SyncLoad() :171
void FileImageSourceImpl__SyncLoad_fn(FileImageSourceImpl* __this)
{
    __this->SyncLoad();
}

// public FileImageSourceImpl(Uno.UX.FileSource file) [instance] :152
void FileImageSourceImpl::ctor_3(::g::Uno::UX::FileSource* file)
{
    ctor_2();

    if (file == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("bundleFile")));

    _file = file;
    uPtr(_file)->add_DataChanged(uDelegate::New(::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL), (void*)FileImageSourceImpl__OnDataChanged_fn, this));
}

// private void FailureCallback(Uno.Exception e) [instance] :235
void FileImageSourceImpl::FailureCallback(::g::Uno::Exception* e)
{
    _loading = false;
    Cleanup(1);
    OnError(uString::Const("BundleFileImageSource-failed-conversion"), e);
}

// public Uno.UX.FileSource get_File() [instance] :149
::g::Uno::UX::FileSource* FileImageSourceImpl::File()
{
    return _file;
}

// private void OnDataChanged(object s, object a) [instance] :166
void FileImageSourceImpl::OnDataChanged(uObject* s, uObject* a)
{
    Reload();
}

// private void SuccessCallback(texture2D texture, Fuse.Resources.Exif.ImageOrientation orientation) [instance] :228
void FileImageSourceImpl::SuccessCallback(::g::Uno::Graphics::Texture2D* texture, int orientation)
{
    _loading = false;
    _orientation = orientation;
    SetTexture(texture);
}

// public void SyncLoad() [instance] :171
void FileImageSourceImpl::SyncLoad()
{
    if (IsLoaded())
    {
        MarkUsed();
        return;
    }

    try
    {
        {
            if (::g::Fuse::UpdateManager::CurrentStage() != 2)
            {
                try
                {
                	GLHelper::SwapBackToBackgroundSurface();
                }
                catch (const uBase::Exception &e)
                {
                	U_THROW(::g::Uno::Exception::New2(uString::Utf8(e.what())));
                }
            }

            uArray* data = uPtr(_file)->ReadAllBytes();
            _orientation = ::g::Fuse::Resources::Exif::ExifData__FromByteArray(data).Orientation;
            ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer::New1(data), uPtr(_file)->Name, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)::g::Fuse::Resources::LoadingImageSource__SetTexture_fn, this));
            OnChanged();
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Cleanup(1);
        OnError(uString::Const("BundleFileImageSource-failed-conversion"), e);
    }
}

// public FileImageSourceImpl New(Uno.UX.FileSource file) [static] :152
FileImageSourceImpl* FileImageSourceImpl::New2(::g::Uno::UX::FileSource* file)
{
    FileImageSourceImpl* obj1 = (FileImageSourceImpl*)uNew(FileImageSourceImpl_typeof());
    obj1->ctor_3(file);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.4.2/Resources/FileResource.uno
// --------------------------------------------------------------------------

// public sealed class FileResource :7
// {
static void FileResource_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::UX::FileSource_typeof(), offsetof(FileResource, _file), 0);
}

::g::Uno::UX::FileSource_type* FileResource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileResource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Resources.FileResource", options);
    type->fp_build_ = FileResource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))FileResource__OpenRead_fn;
    return type;
}

// public override sealed Uno.IO.Stream OpenRead() :17
void FileResource__OpenRead_fn(FileResource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = uPtr(__this->_file)->OpenRead(), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/HttpImageSource.uno
// -------------------------------------------------------------------------------

// public sealed class HttpImageSource :24
// {
static void HttpImageSource_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::TYPES[11] = ::g::Fuse::Resources::HttpImageSourceImpl_typeof();
    type->SetDependencies(
        ::g::Fuse::Resources::HttpImageSourceCache_typeof());
    type->SetFields(4,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(HttpImageSource, _proxy), 0);
}

::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HttpImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSource", options);
    type->fp_build_ = HttpImageSource_build;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))HttpImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__OnPinChanged_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int*))HttpImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))HttpImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))HttpImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))HttpImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))HttpImageSource__get_State_fn;
    return type;
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) :54
void HttpImageSource__set_DefaultPolicy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density() :70
void HttpImageSource__get_Density_fn(HttpImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :70
void HttpImageSource__set_Density_fn(HttpImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public override sealed texture2D GetTexture() :63
void HttpImageSource__GetTexture_fn(HttpImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// protected override sealed void OnPinChanged() :57
void HttpImageSource__OnPinChanged_fn(HttpImageSource* __this)
{
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :59
void HttpImageSource__get_Orientation_fn(HttpImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Orientation(), void();
}

// public override sealed int2 get_PixelSize() :61
void HttpImageSource__get_PixelSize_fn(HttpImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public override sealed void Reload() :64
void HttpImageSource__Reload_fn(HttpImageSource* __this)
{
    uPtr(__this->_proxy)->Reload();
}

// public override sealed float2 get_Size() :60
void HttpImageSource__get_Size_fn(HttpImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :65
void HttpImageSource__get_SizeDensity_fn(HttpImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :62
void HttpImageSource__get_State_fn(HttpImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public string get_Url() :30
void HttpImageSource__get_Url_fn(HttpImageSource* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :31
void HttpImageSource__set_Url_fn(HttpImageSource* __this, uString* value)
{
    __this->Url(value);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance] :54
void HttpImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uPtr(_proxy)->DefaultSetPolicy(value);
}

// public float get_Density() [instance] :70
float HttpImageSource::Density()
{
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance] :70
void HttpImageSource::Density(float value)
{
    uPtr(_proxy)->Density(value);
}

// public string get_Url() [instance] :30
uString* HttpImageSource::Url()
{
    return (uPtr(_proxy)->Impl() == NULL) ? ::STRINGS[0/*""*/] : (uString*)uPtr(uAs< ::g::Fuse::Resources::HttpImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[11/*Fuse.Resources.HttpImageSourceImpl*/]))->Url();
}

// public void set_Url(string value) [instance] :31
void HttpImageSource::Url(uString* value)
{
    uPtr(_proxy)->Release();

    if (::g::Uno::String::op_Equality(value, NULL) || ::g::Uno::String::op_Equality(value, ::STRINGS[0/*""*/]))
        return;

    uPtr(_proxy)->Attach(::g::Fuse::Resources::HttpImageSourceCache::GetUrl(value));
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/HttpImageSource.uno
// -------------------------------------------------------------------------------

// internal static class HttpImageSourceCache :73
// {
// static generated HttpImageSourceCache() :73
static void HttpImageSourceCache__cctor__fn(uType* __type)
{
    HttpImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[12/*Uno.Collections.Dictionary<string, Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>*/]));
}

static void HttpImageSourceCache_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof(), NULL), NULL);
    ::TYPES[13] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[12/*Uno.Collections.Dictionary<string, Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>*/], (uintptr_t)&HttpImageSourceCache::_cache_, uFieldFlagsStatic);
}

uClassType* HttpImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.HttpImageSourceCache", options);
    type->fp_build_ = HttpImageSourceCache_build;
    type->fp_cctor_ = HttpImageSourceCache__cctor__fn;
    return type;
}

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url) :76
void HttpImageSourceCache__GetUrl_fn(uString* url, ::g::Fuse::Resources::HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceCache::GetUrl(url);
}

uSStrong< ::g::Uno::Collections::Dictionary*> HttpImageSourceCache::_cache_;

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url) [static] :76
::g::Fuse::Resources::HttpImageSourceImpl* HttpImageSourceCache::GetUrl(uString* url)
{
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(HttpImageSourceCache::_cache_), url, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::HttpImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
        {
            if (uPtr(his)->State() == 3)
                uPtr(his)->Reload();

            return his;
        }

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(HttpImageSourceCache::_cache_), url, &ret2);
    }

    ::g::Fuse::Resources::HttpImageSourceImpl* nv = ::g::Fuse::Resources::HttpImageSourceImpl::New2(url);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(HttpImageSourceCache::_cache_), url, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[13/*Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>*/], nv));
    return nv;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/HttpImageSource.uno
// -------------------------------------------------------------------------------

// internal sealed class HttpImageSourceImpl :97
// {
static void HttpImageSourceImpl_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Resources::Exif::ExifData_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(12,
        ::g::Uno::String_typeof(), offsetof(HttpImageSourceImpl, _url), 0,
        ::g::Uno::String_typeof(), offsetof(HttpImageSourceImpl, _contentType), 0,
        ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), offsetof(HttpImageSourceImpl, _orientation), 0);
}

::g::Fuse::Resources::LoadingImageSource_type* HttpImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::LoadingImageSource_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HttpImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSourceImpl", options);
    type->fp_build_ = HttpImageSourceImpl_build;
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))HttpImageSourceImpl__AttemptLoad_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int*))HttpImageSourceImpl__get_Orientation_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public HttpImageSourceImpl(string url) :103
void HttpImageSourceImpl__ctor_3_fn(HttpImageSourceImpl* __this, uString* url)
{
    __this->ctor_3(url);
}

// protected override sealed void AttemptLoad() :108
void HttpImageSourceImpl__AttemptLoad_fn(HttpImageSourceImpl* __this)
{
    try
    {
        {
            ::g::Experimental::Http::HttpLoader::LoadBinary(__this->Url(), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Experimental::Http::HttpResponseHeader_typeof(), ::g::Uno::Byte_typeof()->Array(), NULL), (void*)HttpImageSourceImpl__HttpCallback_fn, __this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), (void*)HttpImageSourceImpl__LoadFailed_fn, __this));
            __this->_loading = true;
            __this->OnChanged();
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        __this->Fail(uString::Const("HttpImageSource-failed-request"), e);
    }
}

// private void Fail(string msg, [Uno.Exception e]) :217
void HttpImageSourceImpl__Fail_fn(HttpImageSourceImpl* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->Fail(msg, e);
}

// private void FailureCallback(Uno.Exception e) :128
void HttpImageSourceImpl__FailureCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Exception* e)
{
    __this->FailureCallback(e);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, byte[] data) :140
void HttpImageSourceImpl__HttpCallback_fn(HttpImageSourceImpl* __this, ::g::Experimental::Http::HttpResponseHeader* response, uArray* data)
{
    __this->HttpCallback(response, data);
}

// private void LoadFailed(string reason) :212
void HttpImageSourceImpl__LoadFailed_fn(HttpImageSourceImpl* __this, uString* reason)
{
    __this->LoadFailed(reason);
}

// public HttpImageSourceImpl New(string url) :103
void HttpImageSourceImpl__New2_fn(uString* url, HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceImpl::New2(url);
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :137
void HttpImageSourceImpl__get_Orientation_fn(HttpImageSourceImpl* __this, int* __retval)
{
    return *__retval = __this->_orientation, void();
}

// private void SuccessCallback(texture2D texture) :122
void HttpImageSourceImpl__SuccessCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SuccessCallback(texture);
}

// public string get_Url() :100
void HttpImageSourceImpl__get_Url_fn(HttpImageSourceImpl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public HttpImageSourceImpl(string url) [instance] :103
void HttpImageSourceImpl::ctor_3(uString* url)
{
    ctor_2();
    _url = url;
}

// private void Fail(string msg, [Uno.Exception e]) [instance] :217
void HttpImageSourceImpl::Fail(uString* msg, ::g::Uno::Exception* e)
{
    Cleanup(1);
    OnError(msg, e);
}

// private void FailureCallback(Uno.Exception e) [instance] :128
void HttpImageSourceImpl::FailureCallback(::g::Uno::Exception* e)
{
    _loading = false;
    Fail(uString::Const("HttpImageSource-failed-conversion"), e);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, byte[] data) [instance] :140
void HttpImageSourceImpl::HttpCallback(::g::Experimental::Http::HttpResponseHeader* response, uArray* data)
{
    bool ret2;

    if (uPtr(response)->StatusCode() != 200)
    {
        Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(uString::Const("HttpImageSource-failed-status: "), uBox<int>(::g::Uno::Int_typeof(), uPtr(response)->StatusCode())), uString::Const(" ")), uPtr(response)->ReasonPhrase()), NULL);
        return;
    }

    uString* ct;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(response)->Headers()), uString::Const("content-type"), (void**)(&ct), &ret2), ret2))
        _contentType = uString::Const("x-missing");
    else
        _contentType = ct;

    _orientation = ::g::Fuse::Resources::Exif::ExifData__FromByteArray(data).Orientation;
    HttpImageSourceImpl__BackgroundLoad::New1(data, _contentType, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)HttpImageSourceImpl__SuccessCallback_fn, this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), (void*)HttpImageSourceImpl__FailureCallback_fn, this));
}

// private void LoadFailed(string reason) [instance] :212
void HttpImageSourceImpl::LoadFailed(uString* reason)
{
    Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("HttpImageSource-protocol-failure for url '"), Url()), uString::Const("' : ")), reason), NULL);
}

// private void SuccessCallback(texture2D texture) [instance] :122
void HttpImageSourceImpl::SuccessCallback(::g::Uno::Graphics::Texture2D* texture)
{
    _loading = false;
    SetTexture(texture);
}

// public string get_Url() [instance] :100
uString* HttpImageSourceImpl::Url()
{
    return _url;
}

// public HttpImageSourceImpl New(string url) [static] :103
HttpImageSourceImpl* HttpImageSourceImpl::New2(uString* url)
{
    HttpImageSourceImpl* obj1 = (HttpImageSourceImpl*)uNew(HttpImageSourceImpl_typeof());
    obj1->ctor_3(url);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/ImageSource.uno
// ---------------------------------------------------------------------------

// public abstract class ImageSource :87
// {
static void ImageSource_build(uType* type)
{
    ::STRINGS[1] = uString::Const("ImageSource error: '");
    ::STRINGS[2] = uString::Const("'");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/ImageSource.uno");
    ::STRINGS[4] = uString::Const("OnError");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(1,
        ::g::Uno::Int_typeof(), offsetof(ImageSource, _pinCount), 0,
        ::TYPES[14/*Uno.EventHandler*/], offsetof(ImageSource, Changed1), 0,
        ::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/], offsetof(ImageSource, Error1), 0);
}

ImageSource_type* ImageSource_typeof()
{
    static uSStrong<ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ImageSource);
    options.TypeSize = sizeof(ImageSource_type);
    type = (ImageSource_type*)uClassType::New("Fuse.Resources.ImageSource", options);
    type->fp_build_ = ImageSource_build;
    type->fp_OnPinChanged = ImageSource__OnPinChanged_fn;
    type->fp_Reload = ImageSource__Reload_fn;
    return type;
}

// protected generated ImageSource() :87
void ImageSource__ctor_1_fn(ImageSource* __this)
{
    __this->ctor_1();
}

// public generated void add_Changed(Uno.EventHandler value) :89
void ImageSource__add_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// public generated void remove_Changed(Uno.EventHandler value) :89
void ImageSource__remove_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value) :109
void ImageSource__add_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) :109
void ImageSource__remove_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// internal void FireChanged(Fuse.Resources.ImageSourceChangedArgs args) :103
void ImageSource__FireChanged_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceChangedArgs* args)
{
    __this->FireChanged(args);
}

// internal void FireError(Fuse.Resources.ImageSourceErrorArgs args) :126
void ImageSource__FireError_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->FireError(args);
}

// public bool get_IsPinned() :147
void ImageSource__get_IsPinned_fn(ImageSource* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// protected void OnChanged() :90
void ImageSource__OnChanged_fn(ImageSource* __this)
{
    __this->OnChanged();
}

// protected void OnError(string msg, [Uno.Exception e]) :110
void ImageSource__OnError_fn(ImageSource* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->OnError(msg, e);
}

// protected virtual void OnPinChanged() :149
void ImageSource__OnPinChanged_fn(ImageSource* __this)
{
}

// public void Pin() :133
void ImageSource__Pin_fn(ImageSource* __this)
{
    __this->Pin();
}

// internal void ProxyChanged(object s, Uno.EventArgs a) :98
void ImageSource__ProxyChanged_fn(ImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyChanged(s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a) :121
void ImageSource__ProxyError_fn(ImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyError(s, a);
}

// public virtual void Reload() :156
void ImageSource__Reload_fn(ImageSource* __this)
{
}

// public void Unpin() :139
void ImageSource__Unpin_fn(ImageSource* __this)
{
    __this->Unpin();
}

// protected generated ImageSource() [instance] :87
void ImageSource::ctor_1()
{
    ctor_();
}

// public generated void add_Changed(Uno.EventHandler value) [instance] :89
void ImageSource::add_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_Changed(Uno.EventHandler value) [instance] :89
void ImageSource::remove_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :109
void ImageSource::add_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :109
void ImageSource::remove_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// internal void FireChanged(Fuse.Resources.ImageSourceChangedArgs args) [instance] :103
void ImageSource::FireChanged(::g::Fuse::Resources::ImageSourceChangedArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->Invoke(2, this, args);
}

// internal void FireError(Fuse.Resources.ImageSourceErrorArgs args) [instance] :126
void ImageSource::FireError(::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, this, args);
}

// public bool get_IsPinned() [instance] :147
bool ImageSource::IsPinned()
{
    return _pinCount > 0;
}

// protected void OnChanged() [instance] :90
void ImageSource::OnChanged()
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Resources::ImageSourceChangedArgs__Post_fn, ::g::Fuse::Resources::ImageSourceChangedArgs::New2(this)), -1, 2);
}

// protected void OnError(string msg, [Uno.Exception e]) [instance] :110
void ImageSource::OnError(uString* msg, ::g::Uno::Exception* e)
{
    ::g::Fuse::Diagnostics::UnknownException(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[1/*"ImageSource...*/], msg), ::STRINGS[2/*"'"*/]), e, this, ::STRINGS[3/*"/usr/local/...*/], 112, ::STRINGS[4/*"OnError"*/]);

    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
    {
        ::g::Fuse::Resources::ImageSourceErrorArgs* sa = ::g::Fuse::Resources::ImageSourceErrorArgs::New2(this);
        sa->Reason = msg;
        sa->ExceptionCause = e;
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Resources::ImageSourceErrorArgs__Post_fn, sa), -1, 2);
    }
}

// public void Pin() [instance] :133
void ImageSource::Pin()
{
    _pinCount++;

    if (_pinCount == 1)
        OnPinChanged();
}

// internal void ProxyChanged(object s, Uno.EventArgs a) [instance] :98
void ImageSource::ProxyChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->Invoke(2, s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance] :121
void ImageSource::ProxyError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, s, a);
}

// public void Unpin() [instance] :139
void ImageSource::Unpin()
{
    _pinCount--;

    if (_pinCount == 0)
        OnPinChanged();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/ImageSource.uno
// ---------------------------------------------------------------------------

// internal sealed class ImageSourceChangedArgs :52
// {
static void ImageSourceChangedArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageSourceChangedArgs, _imageSource), 0);
}

uType* ImageSourceChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ImageSourceChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ImageSourceChangedArgs", options);
    type->fp_build_ = ImageSourceChangedArgs_build;
    return type;
}

// internal ImageSourceChangedArgs(Fuse.Resources.ImageSource imageSource) :56
void ImageSourceChangedArgs__ctor_1_fn(ImageSourceChangedArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource)
{
    __this->ctor_1(imageSource);
}

// internal ImageSourceChangedArgs New(Fuse.Resources.ImageSource imageSource) :56
void ImageSourceChangedArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceChangedArgs** __retval)
{
    *__retval = ImageSourceChangedArgs::New2(imageSource);
}

// internal void Post() :61
void ImageSourceChangedArgs__Post_fn(ImageSourceChangedArgs* __this)
{
    __this->Post();
}

// internal ImageSourceChangedArgs(Fuse.Resources.ImageSource imageSource) [instance] :56
void ImageSourceChangedArgs::ctor_1(::g::Fuse::Resources::ImageSource* imageSource)
{
    ctor_();
    _imageSource = imageSource;
}

// internal void Post() [instance] :61
void ImageSourceChangedArgs::Post()
{
    uPtr(_imageSource)->FireChanged(this);
}

// internal ImageSourceChangedArgs New(Fuse.Resources.ImageSource imageSource) [static] :56
ImageSourceChangedArgs* ImageSourceChangedArgs::New2(::g::Fuse::Resources::ImageSource* imageSource)
{
    ImageSourceChangedArgs* obj1 = (ImageSourceChangedArgs*)uNew(ImageSourceChangedArgs_typeof());
    obj1->ctor_1(imageSource);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/ImageSource.uno
// ---------------------------------------------------------------------------

// public sealed class ImageSourceErrorArgs :26
// {
static void ImageSourceErrorArgs_build(uType* type)
{
    ::STRINGS[5] = uString::Const("reason");
    ::TYPES[16] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ImageSourceErrorArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ImageSourceErrorArgs, Reason), 0,
        ::g::Uno::Exception_typeof(), offsetof(ImageSourceErrorArgs, ExceptionCause), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageSourceErrorArgs, _imageSource), 0);
}

ImageSourceErrorArgs_type* ImageSourceErrorArgs_typeof()
{
    static uSStrong<ImageSourceErrorArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageSourceErrorArgs);
    options.TypeSize = sizeof(ImageSourceErrorArgs_type);
    type = (ImageSourceErrorArgs_type*)uClassType::New("Fuse.Resources.ImageSourceErrorArgs", options);
    type->fp_build_ = ImageSourceErrorArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ImageSourceErrorArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// internal ImageSourceErrorArgs(Fuse.Resources.ImageSource imageSource) :39
void ImageSourceErrorArgs__ctor_1_fn(ImageSourceErrorArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource)
{
    __this->ctor_1(imageSource);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :32
void ImageSourceErrorArgs__FuseScriptingIScriptEventSerialize_fn(ImageSourceErrorArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[16/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[5/*"reason"*/], __this->Reason);
}

// internal ImageSourceErrorArgs New(Fuse.Resources.ImageSource imageSource) :39
void ImageSourceErrorArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceErrorArgs** __retval)
{
    *__retval = ImageSourceErrorArgs::New2(imageSource);
}

// internal void Post() :44
void ImageSourceErrorArgs__Post_fn(ImageSourceErrorArgs* __this)
{
    __this->Post();
}

// internal ImageSourceErrorArgs(Fuse.Resources.ImageSource imageSource) [instance] :39
void ImageSourceErrorArgs::ctor_1(::g::Fuse::Resources::ImageSource* imageSource)
{
    ctor_();
    _imageSource = imageSource;
}

// internal void Post() [instance] :44
void ImageSourceErrorArgs::Post()
{
    uPtr(_imageSource)->FireError(this);
}

// internal ImageSourceErrorArgs New(Fuse.Resources.ImageSource imageSource) [static] :39
ImageSourceErrorArgs* ImageSourceErrorArgs::New2(::g::Fuse::Resources::ImageSource* imageSource)
{
    ImageSourceErrorArgs* obj1 = (ImageSourceErrorArgs*)uNew(ImageSourceErrorArgs_typeof());
    obj1->ctor_1(imageSource);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/ImageSource.uno
// ---------------------------------------------------------------------------

// public delegate void ImageSourceErrorHandler(object sender, Fuse.Resources.ImageSourceErrorArgs args) :50
uDelegateType* ImageSourceErrorHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Resources.ImageSourceErrorHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Resources::ImageSourceErrorArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/ImageSource.uno
// ---------------------------------------------------------------------------

// public enum ImageSourceState :14
uEnumType* ImageSourceState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.ImageSourceState", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Pending", 0LL,
        "Ready", 1LL,
        "Loading", 2LL,
        "Failed", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.4.2/Resources/MemoryPolicy.uno
// --------------------------------------------------------------------------

// internal abstract interface IMemoryResource :86
// {
uInterfaceType* IMemoryResource_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.IMemoryResource", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.4.2/Resources/ISoftDisposable.uno
// -----------------------------------------------------------------------------

// internal abstract interface ISoftDisposable :5
// {
uInterfaceType* ISoftDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.ISoftDisposable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/LoadingImageSource.uno
// ----------------------------------------------------------------------------------

// internal abstract class LoadingImageSource :8
// {
static void LoadingImageSource_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Resources::DisposalManager_typeof(),
        ::g::Fuse::Resources::MemoryPolicy_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(LoadingImageSource_type, interface0));
    type->SetFields(4,
        ::g::Uno::Double_typeof(), offsetof(LoadingImageSource, _lastUsed), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(LoadingImageSource, _policy), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(LoadingImageSource, _texture), 0,
        ::g::Uno::Int2_typeof(), offsetof(LoadingImageSource, _textureSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(LoadingImageSource, _loading), 0,
        ::g::Uno::Bool_typeof(), offsetof(LoadingImageSource, _failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(LoadingImageSource, _inDisposal), 0,
        ::g::Uno::Float_typeof(), offsetof(LoadingImageSource, _density), 0);
}

LoadingImageSource_type* LoadingImageSource_typeof()
{
    static uSStrong<LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(LoadingImageSource);
    options.TypeSize = sizeof(LoadingImageSource_type);
    type = (LoadingImageSource_type*)uClassType::New("Fuse.Resources.LoadingImageSource", options);
    type->fp_build_ = LoadingImageSource_build;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))LoadingImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))LoadingImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))LoadingImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))LoadingImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))LoadingImageSource__get_State_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// protected generated LoadingImageSource() :8
void LoadingImageSource__ctor_2_fn(LoadingImageSource* __this)
{
    __this->ctor_2();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason) :86
void LoadingImageSource__Cleanup_fn(LoadingImageSource* __this, int* reason)
{
    __this->Cleanup(*reason);
}

// private bool Fuse.Resources.IMemoryResource.get_IsPinned() :18
void LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn(LoadingImageSource* __this, bool* __retval)
{
    return *__retval = __this->IsPinned(), void();
}

// private double Fuse.Resources.IMemoryResource.get_LastUsed() :20
void LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn(LoadingImageSource* __this, double* __retval)
{
    return *__retval = __this->_lastUsed, void();
}

// private Fuse.Resources.MemoryPolicy Fuse.Resources.IMemoryResource.get_MemoryPolicy() :17
void LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    return *__retval = __this->Policy(), void();
}

// private void Fuse.Resources.IMemoryResource.SoftDispose() :21
void LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn(LoadingImageSource* __this)
{
    __this->Cleanup(2);
}

// public override sealed texture2D GetTexture() :54
void LoadingImageSource__GetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    if (__this->_texture != NULL)
    {
        __this->MarkUsed();
        return *__retval = __this->_texture, void();
    }

    __this->LoadTexture();
    return *__retval = __this->_texture, void();
}

// protected bool get_IsLoaded() :107
void LoadingImageSource__get_IsLoaded_fn(LoadingImageSource* __this, bool* __retval)
{
    *__retval = __this->IsLoaded();
}

// private void LoadTexture() :66
void LoadingImageSource__LoadTexture_fn(LoadingImageSource* __this)
{
    __this->LoadTexture();
}

// protected void MarkUsed() :26
void LoadingImageSource__MarkUsed_fn(LoadingImageSource* __this)
{
    __this->MarkUsed();
}

// protected override sealed void OnPinChanged() :164
void LoadingImageSource__OnPinChanged_fn(LoadingImageSource* __this)
{
    ::g::Fuse::Resources::ImageSource__OnPinChanged_fn(__this);
    __this->MarkUsed();
}

// public override sealed int2 get_PixelSize() :154
void LoadingImageSource__get_PixelSize_fn(LoadingImageSource* __this, ::g::Uno::Int2* __retval)
{
    if (__this->_texture == NULL)
        __this->LoadTexture();

    __this->MarkUsed();
    return *__retval = __this->_textureSize, void();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :34
void LoadingImageSource__get_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :35
void LoadingImageSource__set_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public override sealed void Reload() :74
void LoadingImageSource__Reload_fn(LoadingImageSource* __this)
{
    __this->Cleanup(0);
    __this->LoadTexture();
}

// protected void SetTexture(texture2D texture) :109
void LoadingImageSource__SetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SetTexture(texture);
}

// public override sealed float2 get_Size() :145
void LoadingImageSource__get_Size_fn(LoadingImageSource* __this, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Int2 ts = __this->PixelSize();
    return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ts.X, (float)ts.Y), __this->_density), void();
}

// public override sealed float get_SizeDensity() :140
void LoadingImageSource__get_SizeDensity_fn(LoadingImageSource* __this, float* __retval)
{
    return *__retval = __this->_density, void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :125
void LoadingImageSource__get_State_fn(LoadingImageSource* __this, int* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = 1, void();

    if (__this->_failed)
        return *__retval = 3, void();

    if (__this->_loading)
        return *__retval = 2, void();

    return *__retval = 0, void();
}

// protected generated LoadingImageSource() [instance] :8
void LoadingImageSource::ctor_2()
{
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain_;
    _density = 1.0f;
    ctor_1();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason) [instance] :86
void LoadingImageSource::Cleanup(int reason)
{
    if (_texture != NULL)
    {
        uPtr(_texture)->Dispose();
        _texture = NULL;
    }

    _textureSize = ::g::Uno::Int2__New1(0);
    _loading = false;
    _failed = (reason == 1);

    if (_inDisposal)
        ::g::Fuse::Resources::DisposalManager::Remove((uObject*)this);

    _inDisposal = false;

    if (reason != 2)
        OnChanged();
}

// protected bool get_IsLoaded() [instance] :107
bool LoadingImageSource::IsLoaded()
{
    return _texture != NULL;
}

// private void LoadTexture() [instance] :66
void LoadingImageSource::LoadTexture()
{
    if (_loading || _failed)
        return;

    AttemptLoad();
}

// protected void MarkUsed() [instance] :26
void LoadingImageSource::MarkUsed()
{
    _lastUsed = ::g::Fuse::Time::FrameTime();
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :34
::g::Fuse::Resources::MemoryPolicy* LoadingImageSource::Policy()
{
    return _policy;
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :35
void LoadingImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    if (value == NULL)
        U_THROW(::g::Uno::Exception::New2(uString::Const("value-cannot-be-null")));

    _policy = value;
}

// protected void SetTexture(texture2D texture) [instance] :109
void LoadingImageSource::SetTexture(::g::Uno::Graphics::Texture2D* texture)
{
    _texture = texture;
    _textureSize = uPtr(texture)->Size();

    if (!_inDisposal)
    {
        ::g::Fuse::Resources::DisposalManager::Add((uObject*)this);
        _inDisposal = true;
    }

    MarkUsed();
    OnChanged();
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.4.2/Resources/MemoryPolicy.uno
// --------------------------------------------------------------------------

// public sealed class MemoryPolicy :10
// {
// static generated MemoryPolicy() :10
static void MemoryPolicy__cctor__fn(uType* __type)
{
    MemoryPolicy* collection4;
    MemoryPolicy* collection3;
    MemoryPolicy* collection2;
    MemoryPolicy* collection1;
    MemoryPolicy::PreloadRetain_ = (collection4 = MemoryPolicy::New1(), uPtr(collection4)->BundlePreload(true), true, collection4);
    MemoryPolicy::UnloadUnused_ = (collection3 = MemoryPolicy::New1(), uPtr(collection3)->UnloadInBackground(true), true, uPtr(collection3)->UnusedTimeout(60.0), 60.0, uPtr(collection3)->UnpinInvisible(true), true, collection3);
    MemoryPolicy::QuickUnload_ = (collection2 = MemoryPolicy::New1(), uPtr(collection2)->UnloadInBackground(true), true, uPtr(collection2)->UnusedTimeout(1.0), 1.0, uPtr(collection2)->UnpinInvisible(true), true, collection2);
    MemoryPolicy::UnloadInBackgroundPolicy_ = (collection1 = MemoryPolicy::New1(), uPtr(collection1)->UnloadInBackground(true), true, collection1);
}

static void MemoryPolicy_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Resources::IMemoryResource_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _AllowPinnedFree), 0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _BundlePreload), 0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _UnloadInBackground), 0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _UnpinInvisible), 0,
        ::g::Uno::Double_typeof(), offsetof(MemoryPolicy, _UnusedTimeout), 0,
        type, (uintptr_t)&MemoryPolicy::PreloadRetain_, uFieldFlagsStatic,
        type, (uintptr_t)&MemoryPolicy::UnloadUnused_, uFieldFlagsStatic,
        type, (uintptr_t)&MemoryPolicy::QuickUnload_, uFieldFlagsStatic,
        type, (uintptr_t)&MemoryPolicy::UnloadInBackgroundPolicy_, uFieldFlagsStatic);
}

uType* MemoryPolicy_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(MemoryPolicy);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.MemoryPolicy", options);
    type->fp_build_ = MemoryPolicy_build;
    type->fp_ctor_ = (void*)MemoryPolicy__New1_fn;
    type->fp_cctor_ = MemoryPolicy__cctor__fn;
    return type;
}

// public generated MemoryPolicy() :10
void MemoryPolicy__ctor__fn(MemoryPolicy* __this)
{
    __this->ctor_();
}

// public generated bool get_AllowPinnedFree() :61
void MemoryPolicy__get_AllowPinnedFree_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->AllowPinnedFree();
}

// public generated void set_AllowPinnedFree(bool value) :61
void MemoryPolicy__set_AllowPinnedFree_fn(MemoryPolicy* __this, bool* value)
{
    __this->AllowPinnedFree(*value);
}

// public generated bool get_BundlePreload() :52
void MemoryPolicy__get_BundlePreload_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->BundlePreload();
}

// public generated void set_BundlePreload(bool value) :52
void MemoryPolicy__set_BundlePreload_fn(MemoryPolicy* __this, bool* value)
{
    __this->BundlePreload(*value);
}

// public generated MemoryPolicy New() :10
void MemoryPolicy__New1_fn(MemoryPolicy** __retval)
{
    *__retval = MemoryPolicy::New1();
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource) :66
void MemoryPolicy__ShouldSoftDispose_fn(MemoryPolicy* __this, int* dr, uObject* resource, bool* __retval)
{
    *__retval = __this->ShouldSoftDispose(*dr, resource);
}

// public generated bool get_UnloadInBackground() :55
void MemoryPolicy__get_UnloadInBackground_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnloadInBackground();
}

// public generated void set_UnloadInBackground(bool value) :55
void MemoryPolicy__set_UnloadInBackground_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnloadInBackground(*value);
}

// public generated bool get_UnpinInvisible() :64
void MemoryPolicy__get_UnpinInvisible_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnpinInvisible();
}

// public generated void set_UnpinInvisible(bool value) :64
void MemoryPolicy__set_UnpinInvisible_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnpinInvisible(*value);
}

// public generated double get_UnusedTimeout() :58
void MemoryPolicy__get_UnusedTimeout_fn(MemoryPolicy* __this, double* __retval)
{
    *__retval = __this->UnusedTimeout();
}

// public generated void set_UnusedTimeout(double value) :58
void MemoryPolicy__set_UnusedTimeout_fn(MemoryPolicy* __this, double* value)
{
    __this->UnusedTimeout(*value);
}

uSStrong<MemoryPolicy*> MemoryPolicy::PreloadRetain_;
uSStrong<MemoryPolicy*> MemoryPolicy::UnloadUnused_;
uSStrong<MemoryPolicy*> MemoryPolicy::QuickUnload_;
uSStrong<MemoryPolicy*> MemoryPolicy::UnloadInBackgroundPolicy_;

// public generated MemoryPolicy() [instance] :10
void MemoryPolicy::ctor_()
{
}

// public generated bool get_AllowPinnedFree() [instance] :61
bool MemoryPolicy::AllowPinnedFree()
{
    return _AllowPinnedFree;
}

// public generated void set_AllowPinnedFree(bool value) [instance] :61
void MemoryPolicy::AllowPinnedFree(bool value)
{
    _AllowPinnedFree = value;
}

// public generated bool get_BundlePreload() [instance] :52
bool MemoryPolicy::BundlePreload()
{
    return _BundlePreload;
}

// public generated void set_BundlePreload(bool value) [instance] :52
void MemoryPolicy::BundlePreload(bool value)
{
    _BundlePreload = value;
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource) [instance] :66
bool MemoryPolicy::ShouldSoftDispose(int dr, uObject* resource)
{
    if ((dr == 1) && UnloadInBackground())
        return true;

    if ((dr == 2) && (!::g::Fuse::Resources::IMemoryResource::IsPinned(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])) || AllowPinnedFree()))
        return true;

    if ((AllowPinnedFree() || !::g::Fuse::Resources::IMemoryResource::IsPinned(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]))) && (UnusedTimeout() > 0.0))
    {
        double elapsed = ::g::Fuse::Time::FrameTime() - ::g::Fuse::Resources::IMemoryResource::LastUsed(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));

        if (elapsed > UnusedTimeout())
            return true;
    }

    return false;
}

// public generated bool get_UnloadInBackground() [instance] :55
bool MemoryPolicy::UnloadInBackground()
{
    return _UnloadInBackground;
}

// public generated void set_UnloadInBackground(bool value) [instance] :55
void MemoryPolicy::UnloadInBackground(bool value)
{
    _UnloadInBackground = value;
}

// public generated bool get_UnpinInvisible() [instance] :64
bool MemoryPolicy::UnpinInvisible()
{
    return _UnpinInvisible;
}

// public generated void set_UnpinInvisible(bool value) [instance] :64
void MemoryPolicy::UnpinInvisible(bool value)
{
    _UnpinInvisible = value;
}

// public generated double get_UnusedTimeout() [instance] :58
double MemoryPolicy::UnusedTimeout()
{
    return _UnusedTimeout;
}

// public generated void set_UnusedTimeout(double value) [instance] :58
void MemoryPolicy::UnusedTimeout(double value)
{
    _UnusedTimeout = value;
}

// public generated MemoryPolicy New() [static] :10
MemoryPolicy* MemoryPolicy::New1()
{
    MemoryPolicy* obj5 = (MemoryPolicy*)uNew(MemoryPolicy_typeof());
    obj5->ctor_();
    return obj5;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/MultiDensityImageSource.uno
// ---------------------------------------------------------------------------------------

// public sealed class MultiDensityImageSource :28
// {
static void MultiDensityImageSource_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[20] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::IDisposable_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::AppBase_typeof());
    type->SetFields(4,
        ::TYPES[17/*Uno.Collections.ObservableList<Fuse.Resources.ImageSource>*/], offsetof(MultiDensityImageSource, _sources), 0,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(MultiDensityImageSource, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(MultiDensityImageSource, _matchDensity), 0,
        ::g::Uno::Bool_typeof(), offsetof(MultiDensityImageSource, _hasMatchDensity), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(MultiDensityImageSource, _active), 0,
        ::TYPES[0/*Uno.Action*/], offsetof(MultiDensityImageSource, ActiveChanged1), 0);
}

::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MultiDensityImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.MultiDensityImageSource", options);
    type->fp_build_ = MultiDensityImageSource_build;
    type->fp_ctor_ = (void*)MultiDensityImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))MultiDensityImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))MultiDensityImageSource__OnPinChanged_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int*))MultiDensityImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))MultiDensityImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))MultiDensityImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))MultiDensityImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))MultiDensityImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))MultiDensityImageSource__get_State_fn;
    return type;
}

// public MultiDensityImageSource() :43
void MultiDensityImageSource__ctor_2_fn(MultiDensityImageSource* __this)
{
    __this->ctor_2();
}

// internal Fuse.Resources.ImageSource get_Active() :94
void MultiDensityImageSource__get_Active_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Active();
}

// internal generated void add_ActiveChanged(Uno.Action value) :49
void MultiDensityImageSource__add_ActiveChanged_fn(MultiDensityImageSource* __this, uDelegate* value)
{
    __this->add_ActiveChanged(value);
}

// internal generated void remove_ActiveChanged(Uno.Action value) :49
void MultiDensityImageSource__remove_ActiveChanged_fn(MultiDensityImageSource* __this, uDelegate* value)
{
    __this->remove_ActiveChanged(value);
}

// public override sealed texture2D GetTexture() :174
void MultiDensityImageSource__GetTexture_fn(MultiDensityImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public MultiDensityImageSource New() :43
void MultiDensityImageSource__New2_fn(MultiDensityImageSource** __retval)
{
    *__retval = MultiDensityImageSource::New2();
}

// private void OnActiveChanged() :51
void MultiDensityImageSource__OnActiveChanged_fn(MultiDensityImageSource* __this)
{
    __this->OnActiveChanged();
}

// private void OnImageAdded(Fuse.Resources.ImageSource img) :60
void MultiDensityImageSource__OnImageAdded_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageAdded(img);
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img) :66
void MultiDensityImageSource__OnImageRemoved_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageRemoved(img);
}

// protected override sealed void OnPinChanged() :136
void MultiDensityImageSource__OnPinChanged_fn(MultiDensityImageSource* __this)
{
    __this->SelectActive();
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :160
void MultiDensityImageSource__get_Orientation_fn(MultiDensityImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Orientation(), void();
}

// public override sealed int2 get_PixelSize() :152
void MultiDensityImageSource__get_PixelSize_fn(MultiDensityImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public override sealed void Reload() :179
void MultiDensityImageSource__Reload_fn(MultiDensityImageSource* __this)
{
    uPtr(__this->_proxy)->Reload();
}

// private void SelectActive() :97
void MultiDensityImageSource__SelectActive_fn(MultiDensityImageSource* __this)
{
    __this->SelectActive();
}

// public override sealed float2 get_Size() :144
void MultiDensityImageSource__get_Size_fn(MultiDensityImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :186
void MultiDensityImageSource__get_SizeDensity_fn(MultiDensityImageSource* __this, float* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Density(), void();
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources() :35
void MultiDensityImageSource__get_Sources_fn(MultiDensityImageSource* __this, uObject** __retval)
{
    *__retval = __this->Sources();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :168
void MultiDensityImageSource__get_State_fn(MultiDensityImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// private void SwapActive(Fuse.Resources.ImageSource use) :116
void MultiDensityImageSource__SwapActive_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* use)
{
    __this->SwapActive(use);
}

// public MultiDensityImageSource() [instance] :43
void MultiDensityImageSource::ctor_2()
{
    ctor_1();
    _sources = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[17/*Uno.Collections.ObservableList<Fuse.Resources.ImageSource>*/], uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageAdded_fn, this), uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageRemoved_fn, this)));
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// internal Fuse.Resources.ImageSource get_Active() [instance] :94
::g::Fuse::Resources::ImageSource* MultiDensityImageSource::Active()
{
    return _active;
}

// internal generated void add_ActiveChanged(Uno.Action value) [instance] :49
void MultiDensityImageSource::add_ActiveChanged(uDelegate* value)
{
    ActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ActiveChanged1, value), ::TYPES[0/*Uno.Action*/]);
}

// internal generated void remove_ActiveChanged(Uno.Action value) [instance] :49
void MultiDensityImageSource::remove_ActiveChanged(uDelegate* value)
{
    ActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ActiveChanged1, value), ::TYPES[0/*Uno.Action*/]);
}

// private void OnActiveChanged() [instance] :51
void MultiDensityImageSource::OnActiveChanged()
{
    uDelegate* handler = ActiveChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid();
}

// private void OnImageAdded(Fuse.Resources.ImageSource img) [instance] :60
void MultiDensityImageSource::OnImageAdded(::g::Fuse::Resources::ImageSource* img)
{
    if (IsPinned())
        SelectActive();
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img) [instance] :66
void MultiDensityImageSource::OnImageRemoved(::g::Fuse::Resources::ImageSource* img)
{
    if (IsPinned())
        SelectActive();
}

// private void SelectActive() [instance] :97
void MultiDensityImageSource::SelectActive()
{
    ::g::Fuse::Resources::ImageSource* ret3;
    float screen = _hasMatchDensity ? _matchDensity : uPtr(::g::Fuse::AppBase::Current2())->PixelsPerPoint();
    float diff = FLT_INF;
    ::g::Fuse::Resources::ImageSource* use = NULL;
    uObject* enum1 = (uObject*)uPtr(_sources)->GetEnumerator();

    try
    {
        {
            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[19/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Fuse::Resources::ImageSource* source = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[20/*Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>*/]), &ret3), ret3);
                float d = ::g::Uno::Math::Abs1(uPtr(source)->SizeDensity() - screen);

                if (d < diff)
                {
                    use = source;
                    diff = d;
                }
            }
        }
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[21/*Uno.IDisposable*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[21/*Uno.IDisposable*/]));
        }
                throw __t;
    }

    SwapActive(use);
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources() [instance] :35
uObject* MultiDensityImageSource::Sources()
{
    return (uObject*)_sources;
}

// private void SwapActive(Fuse.Resources.ImageSource use) [instance] :116
void MultiDensityImageSource::SwapActive(::g::Fuse::Resources::ImageSource* use)
{
    if (use == _active)
        return;

    if (_active != NULL)
        uPtr(_proxy)->Release();

    _active = use;

    if (use != NULL)
        uPtr(_proxy)->Attach(use);

    OnActiveChanged();
}

// public MultiDensityImageSource New() [static] :43
MultiDensityImageSource* MultiDensityImageSource::New2()
{
    MultiDensityImageSource* obj2 = (MultiDensityImageSource*)uNew(MultiDensityImageSource_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/ProxyImageSource.uno
// --------------------------------------------------------------------------------

// internal sealed class ProxyImageSource :7
// {
static void ProxyImageSource_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    ::TYPES[22] = ::g::Fuse::Resources::LoadingImageSource_typeof();
    ::TYPES[23] = ::g::Uno::Graphics::Texture2D_typeof();
    type->SetDependencies(
        ::g::Fuse::Resources::MemoryPolicy_typeof());
    type->SetFields(0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ProxyImageSource, _outer), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ProxyImageSource, _impl), 0,
        ::g::Uno::Bool_typeof(), offsetof(ProxyImageSource, _isDefaultPolicy), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(ProxyImageSource, _policy), 0,
        ::g::Uno::Float_typeof(), offsetof(ProxyImageSource, _density), 0,
        ::g::Uno::Bool_typeof(), offsetof(ProxyImageSource, _hasDensity), 0);
}

uType* ProxyImageSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ProxyImageSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ProxyImageSource", options);
    type->fp_build_ = ProxyImageSource_build;
    return type;
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer) :10
void ProxyImageSource__ctor__fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* outer)
{
    __this->ctor_(outer);
}

// public void Attach(Fuse.Resources.ImageSource impl) :149
void ProxyImageSource__Attach_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* impl)
{
    __this->Attach(impl);
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp) :43
void ProxyImageSource__DefaultSetPolicy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* mp)
{
    __this->DefaultSetPolicy(mp);
}

// public float get_Density() :98
void ProxyImageSource__get_Density_fn(ProxyImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :104
void ProxyImageSource__set_Density_fn(ProxyImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public texture2D GetTexture() :116
void ProxyImageSource__GetTexture_fn(ProxyImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl() :16
void ProxyImageSource__get_Impl_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Impl();
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer) :10
void ProxyImageSource__New1_fn(::g::Fuse::Resources::ImageSource* outer, ProxyImageSource** __retval)
{
    *__retval = ProxyImageSource::New1(outer);
}

// public void OnPinChanged() :18
void ProxyImageSource__OnPinChanged_fn(ProxyImageSource* __this)
{
    __this->OnPinChanged();
}

// public Fuse.Resources.Exif.ImageOrientation get_Orientation() :61
void ProxyImageSource__get_Orientation_fn(ProxyImageSource* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public int2 get_PixelSize() :83
void ProxyImageSource__get_PixelSize_fn(ProxyImageSource* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->PixelSize();
}

// private void ProxyOnChanged(object s, Uno.EventArgs a) :139
void ProxyImageSource__ProxyOnChanged_fn(ProxyImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyOnChanged(s, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a) :144
void ProxyImageSource__ProxyOnError_fn(ProxyImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyOnError(s, a);
}

// public void Release() :127
void ProxyImageSource__Release_fn(ProxyImageSource* __this)
{
    __this->Release();
}

// public void Reload() :121
void ProxyImageSource__Reload_fn(ProxyImageSource* __this)
{
    __this->Reload();
}

// public float2 get_Size() :71
void ProxyImageSource__get_Size_fn(ProxyImageSource* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public Fuse.Resources.ImageSourceState get_State() :113
void ProxyImageSource__get_State_fn(ProxyImageSource* __this, int* __retval)
{
    *__retval = __this->State();
}

// private void UpdatePolicy() :52
void ProxyImageSource__UpdatePolicy_fn(ProxyImageSource* __this)
{
    __this->UpdatePolicy();
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer) [instance] :10
void ProxyImageSource::ctor_(::g::Fuse::Resources::ImageSource* outer)
{
    _isDefaultPolicy = true;
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain_;
    _density = 1.0f;
    _outer = outer;
}

// public void Attach(Fuse.Resources.ImageSource impl) [instance] :149
void ProxyImageSource::Attach(::g::Fuse::Resources::ImageSource* impl)
{
    _impl = impl;
    uPtr(_impl)->add_Changed(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
    uPtr(_impl)->add_Error(uDelegate::New(::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();

    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(impl, ::TYPES[22/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != NULL)
        uPtr(loading)->Policy(_policy);

    uPtr(_outer)->ProxyChanged(this, ::g::Uno::EventArgs::New1());
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp) [instance] :43
void ProxyImageSource::DefaultSetPolicy(::g::Fuse::Resources::MemoryPolicy* mp)
{
    if (!_isDefaultPolicy)
        return;

    _policy = mp;
    UpdatePolicy();
}

// public float get_Density() [instance] :98
float ProxyImageSource::Density()
{
    if (_hasDensity || (_impl == NULL))
        return _density;

    return uPtr(_impl)->SizeDensity();
}

// public void set_Density(float value) [instance] :104
void ProxyImageSource::Density(float value)
{
    _density = value;
    _hasDensity = true;
}

// public texture2D GetTexture() [instance] :116
::g::Uno::Graphics::Texture2D* ProxyImageSource::GetTexture()
{
    return (_impl == NULL) ? uCast< ::g::Uno::Graphics::Texture2D*>(NULL, ::TYPES[23/*texture2D*/]) : (::g::Uno::Graphics::Texture2D*)uPtr(_impl)->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl() [instance] :16
::g::Fuse::Resources::ImageSource* ProxyImageSource::Impl()
{
    return _impl;
}

// public void OnPinChanged() [instance] :18
void ProxyImageSource::OnPinChanged()
{
    if (_impl == NULL)
        return;

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();
    else
        uPtr(_impl)->Unpin();
}

// public Fuse.Resources.Exif.ImageOrientation get_Orientation() [instance] :61
int ProxyImageSource::Orientation()
{
    if (_impl != NULL)
        return uPtr(_impl)->Orientation();

    return 0;
}

// public int2 get_PixelSize() [instance] :83
::g::Uno::Int2 ProxyImageSource::PixelSize()
{
    if (_impl == NULL)
        return ::g::Uno::Int2__New1(0);

    return uPtr(_impl)->PixelSize();
}

// private void ProxyOnChanged(object s, Uno.EventArgs a) [instance] :139
void ProxyImageSource::ProxyOnChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    uPtr(_outer)->ProxyChanged(this, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance] :144
void ProxyImageSource::ProxyOnError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    uPtr(_outer)->ProxyError(this, a);
}

// public void Release() [instance] :127
void ProxyImageSource::Release()
{
    if (_impl != NULL)
    {
        if (uPtr(_outer)->IsPinned())
            uPtr(_impl)->Unpin();

        uPtr(_impl)->remove_Changed(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
        uPtr(_impl)->remove_Error(uDelegate::New(::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));
        _impl = NULL;
    }
}

// public void Reload() [instance] :121
void ProxyImageSource::Reload()
{
    if (_impl != NULL)
        uPtr(_impl)->Reload();
}

// public float2 get_Size() [instance] :71
::g::Uno::Float2 ProxyImageSource::Size()
{
    if (_impl == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Uno::Int2 ps = uPtr(_impl)->PixelSize();
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ps.X, (float)ps.Y), _density);
}

// public Fuse.Resources.ImageSourceState get_State() [instance] :113
int ProxyImageSource::State()
{
    return (_impl == NULL) ? 0 : uPtr(_impl)->State();
}

// private void UpdatePolicy() [instance] :52
void ProxyImageSource::UpdatePolicy()
{
    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(_impl, ::TYPES[22/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != NULL)
        uPtr(loading)->Policy(_policy);
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer) [static] :10
ProxyImageSource* ProxyImageSource::New1(::g::Fuse::Resources::ImageSource* outer)
{
    ProxyImageSource* obj1 = (ProxyImageSource*)uNew(ProxyImageSource_typeof());
    obj1->ctor_(outer);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.4.2/Resources/ResourceRegistry.uno
// ------------------------------------------------------------------------------

// public static class ResourceRegistry :8
// {
// static generated ResourceRegistry() :8
static void ResourceRegistry__cctor__fn(uType* __type)
{
    ResourceRegistry::_handlers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[24/*Uno.Collections.Dictionary<string, Uno.Collections.List<Uno.Action>>*/]));
}

static void ResourceRegistry_build(uType* type)
{
    ::TYPES[24] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL), NULL);
    ::TYPES[25] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[26] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[24/*Uno.Collections.Dictionary<string, Uno.Collections.List<Uno.Action>>*/], (uintptr_t)&ResourceRegistry::_handlers_, uFieldFlagsStatic);
}

uClassType* ResourceRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.ResourceRegistry", options);
    type->fp_build_ = ResourceRegistry_build;
    type->fp_cctor_ = ResourceRegistry__cctor__fn;
    return type;
}

// public static void AddResourceChangedHandler(string key, Uno.Action handler) :12
void ResourceRegistry__AddResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::AddResourceChangedHandler(key, handler);
}

// public static void NotifyResourceChanged(string key) :28
void ResourceRegistry__NotifyResourceChanged_fn(uString* key)
{
    ResourceRegistry::NotifyResourceChanged(key);
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler) :22
void ResourceRegistry__RemoveResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::RemoveResourceChangedHandler(key, handler);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ResourceRegistry::_handlers_;

// public static void AddResourceChangedHandler(string key, Uno.Action handler) [static] :12
void ResourceRegistry::AddResourceChangedHandler(uString* key, uDelegate* handler)
{
    bool ret2;
    ::g::Uno::Collections::List* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers_), key, &ret2), ret2))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ResourceRegistry::_handlers_), key, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[25/*Uno.Collections.List<Uno.Action>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers_), key, &ret3), ret3)), handler);
}

// public static void NotifyResourceChanged(string key) [static] :28
void ResourceRegistry::NotifyResourceChanged(uString* key)
{
    bool ret4;
    ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > ret5;
    ::g::Uno::Collections::List* list;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ResourceRegistry::_handlers_), key, (void**)(&list), &ret4), ret4))
    {
        ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(list), &ret5), ret5);

        try
        {
            {
                while (enum1.MoveNext(::TYPES[26/*Uno.Collections.List<Uno.Action>.Enumerator*/]))
                {
                    uDelegate* h = enum1.Current(::TYPES[26/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
                    uPtr(h)->InvokeVoid();
                }
            }
            {
                enum1.Dispose(::TYPES[26/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[26/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
            }
                        throw __t;
        }
    }
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler) [static] :22
void ResourceRegistry::RemoveResourceChangedHandler(uString* key, uDelegate* handler)
{
    bool ret6;
    bool ret7;
    ::g::Uno::Collections::List* ret8;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers_), key, &ret6), ret6))
        U_THROW(::g::Uno::Exception::New1());

    ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers_), key, &ret8), ret8)), handler, &ret7);
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.4.2/Resources/SystemFileSource.uno
// ------------------------------------------------------------------------------

// internal sealed class SystemFileSource :6
// {
static void SystemFileSource_build(uType* type)
{
    type->SetFields(2);
}

::g::Uno::UX::FileSource_type* SystemFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SystemFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Resources.SystemFileSource", options);
    type->fp_build_ = SystemFileSource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))SystemFileSource__OpenRead_fn;
    return type;
}

// public SystemFileSource(string file) :8
void SystemFileSource__ctor_1_fn(SystemFileSource* __this, uString* file)
{
    __this->ctor_1(file);
}

// public SystemFileSource New(string file) :8
void SystemFileSource__New1_fn(uString* file, SystemFileSource** __retval)
{
    *__retval = SystemFileSource::New1(file);
}

// public override sealed Uno.IO.Stream OpenRead() :13
void SystemFileSource__OpenRead_fn(SystemFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->Name), void();
}

// public SystemFileSource(string file) [instance] :8
void SystemFileSource::ctor_1(uString* file)
{
    ctor_(file);
}

// public SystemFileSource New(string file) [static] :8
SystemFileSource* SystemFileSource::New1(uString* file)
{
    SystemFileSource* obj1 = (SystemFileSource*)uNew(SystemFileSource_typeof());
    obj1->ctor_1(file);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/TextureImageSource.uno
// ----------------------------------------------------------------------------------

// public sealed class TextureImageSource :17
// {
static void TextureImageSource_build(uType* type)
{
    type->SetFields(4,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(TextureImageSource, _texture), 0,
        ::g::Uno::Float_typeof(), offsetof(TextureImageSource, _density), 0);
}

::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TextureImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.TextureImageSource", options);
    type->fp_build_ = TextureImageSource_build;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))TextureImageSource__GetTexture_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int*))TextureImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))TextureImageSource__get_PixelSize_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))TextureImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))TextureImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))TextureImageSource__get_State_fn;
    return type;
}

// public float get_Density() :44
void TextureImageSource__get_Density_fn(TextureImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :45
void TextureImageSource__set_Density_fn(TextureImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public override sealed texture2D GetTexture() :90
void TextureImageSource__GetTexture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = __this->_texture, void();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :36
void TextureImageSource__get_Orientation_fn(TextureImageSource* __this, int* __retval)
{
    return *__retval = 0, void();
}

// public override sealed int2 get_PixelSize() :72
void TextureImageSource__get_PixelSize_fn(TextureImageSource* __this, ::g::Uno::Int2* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = uPtr(__this->_texture)->Size(), void();

    return *__retval = ::g::Uno::Int2__New1(0), void();
}

// public override sealed float2 get_Size() :62
void TextureImageSource__get_Size_fn(TextureImageSource* __this, ::g::Uno::Float2* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(__this->_texture)->Size().X, (float)uPtr(__this->_texture)->Size().Y), __this->_density), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public override sealed float get_SizeDensity() :57
void TextureImageSource__get_SizeDensity_fn(TextureImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :82
void TextureImageSource__get_State_fn(TextureImageSource* __this, int* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = 1, void();

    return *__retval = 0, void();
}

// public float get_Density() [instance] :44
float TextureImageSource::Density()
{
    return _density;
}

// public void set_Density(float value) [instance] :45
void TextureImageSource::Density(float value)
{
    if (_density != value)
    {
        _density = value;
        OnChanged();
    }
}
// }

}}} // ::g::Fuse::Resources

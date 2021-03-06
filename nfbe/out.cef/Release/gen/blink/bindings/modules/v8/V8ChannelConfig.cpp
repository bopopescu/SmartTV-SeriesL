// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8ChannelConfig.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8ChannelList.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8ChannelConfig::wrapperTypeInfo = { gin::kEmbedderBlink, V8ChannelConfig::domTemplate, V8ChannelConfig::refObject, V8ChannelConfig::derefObject, V8ChannelConfig::trace, 0, 0, V8ChannelConfig::preparePrototypeAndInterfaceObject, V8ChannelConfig::installConditionallyEnabledProperties, "ChannelConfig", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ChannelConfig.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ChannelConfig::s_wrapperTypeInfo = V8ChannelConfig::wrapperTypeInfo;

namespace ChannelConfigV8Internal {

static void channelListAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ChannelConfig* impl = V8ChannelConfig::toImpl(holder);
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RawPtr<ChannelList> cppValue(impl->channelList(executionContext));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "channelList"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void channelListAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ChannelConfigV8Internal::channelListAttributeGetter(info);
}

} // namespace ChannelConfigV8Internal

const V8DOMConfiguration::AccessorConfiguration V8ChannelConfigAccessors[] = {
    {"channelList", ChannelConfigV8Internal::channelListAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8ChannelConfigTemplate(v8::Local<v8::FunctionTemplate> interfaceTemplate, v8::Isolate* isolate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8ChannelConfig::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8ChannelConfig::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::hbbTVEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8ChannelConfigAccessors, WTF_ARRAY_LENGTH(V8ChannelConfigAccessors));
    } // if (RuntimeEnabledFeatures::hbbTVEnabled())
}

v8::Local<v8::FunctionTemplate> V8ChannelConfig::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ChannelConfigTemplate);
}

bool V8ChannelConfig::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ChannelConfig::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ChannelConfig* V8ChannelConfig::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8ChannelConfig::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8ChannelConfig::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink

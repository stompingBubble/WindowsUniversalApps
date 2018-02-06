﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class TextBox;
                ref class Button;
                ref class TextBlock;
            }
        }
    }
}

namespace App2
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class MainPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
    
        private: ::Windows::UI::Xaml::Controls::TextBox^ connectionString;
        private: ::Windows::UI::Xaml::Controls::TextBox^ azure_deviceID;
        private: ::Windows::UI::Xaml::Controls::TextBox^ azure_message;
        private: ::Windows::UI::Xaml::Controls::Button^ azure_sendMessage;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ az_outputText;
        private: ::Windows::UI::Xaml::Controls::TextBox^ accesskey;
        private: ::Windows::UI::Xaml::Controls::TextBox^ aws_deviceID;
        private: ::Windows::UI::Xaml::Controls::TextBox^ aws_message;
        private: ::Windows::UI::Xaml::Controls::Button^ aws_sendMessage;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ aw_outputText;
    };
}


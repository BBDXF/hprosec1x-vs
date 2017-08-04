#include <stdlib.h>
#include <stdio.h>
#include <hprose/rpc/asio/HttpClient.h>

using hprose::rpc::InvokeSettings;
using hprose::rpc::asio::HttpClient;

void main() {
	printf("====Test Hrpose Cpp====\n");

	HttpClient client1("http://hprose.com/example/");
	auto result1 = client1.invoke<std::string>("hello", std::vector<std::string>({ "world" }));
	printf("Result1: %s\n", result1.c_str());

	HttpClient client2("http://127.0.0.1/");
	auto result2 = client2.invoke<std::string>("hello", std::vector<std::string>({ "world" }));
	printf("Result2: %s\n", result2.c_str());



	system("pause");
}
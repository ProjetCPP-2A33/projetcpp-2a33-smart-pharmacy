/*#include "twilio.h"
#include <curl/curl.h>

namespace twilio {

Twilio::Twilio(const std::string& account_sid, const std::string& auth_token)
    : account_sid_(account_sid), auth_token_(auth_token) {}

bool Twilio::send_message(const std::string& to_number, const std::string& from_number, const std::string& message_body, std::string& response) {
    std::string url = "https://api.twilio.com/2010-04-01/Accounts/" + account_sid_ + "/Messages.json";
    std::string post_fields = "To=" + to_number + "&From=" + from_number + "&Body=" + message_body;

    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_POST, 1L);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post_fields.c_str());

        std::string credentials = account_sid_ + ":" + auth_token_;
        curl_easy_setopt(curl, CURLOPT_USERPWD, credentials.c_str());

        res = curl_easy_perform(curl);

        if (res == CURLE_OK) {
            response = "Message sent successfully!";
        } else {
            response = "Failed to send message: " + std::string(curl_easy_strerror(res));
        }

        curl_easy_cleanup(curl);
    } else {
        response = "Failed to initialize cURL.";
        return false;
    }

    return true;
}

} // namespace twilio
*/

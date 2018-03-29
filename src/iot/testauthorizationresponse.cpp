/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testauthorizationresponse.h"
#include "testauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  TestAuthorizationResponse
 *
 * @brief  Handles IoT TestAuthorization responses.
 *
 * @see    IoTClient::testAuthorization
 */

/**
 * @brief  Constructs a new TestAuthorizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestAuthorizationResponse::TestAuthorizationResponse(
        const TestAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new TestAuthorizationResponsePrivate(this), parent)
{
    setRequest(new TestAuthorizationRequest(request));
    setReply(reply);
}

const TestAuthorizationRequest * TestAuthorizationResponse::request() const
{
    Q_D(const TestAuthorizationResponse);
    return static_cast<const TestAuthorizationRequest *>(d->request);
}

/**
 * @brief  Parse a IoT TestAuthorization response.
 *
 * @param  response  Response to parse.
 */
void TestAuthorizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TestAuthorizationResponsePrivate
 *
 * @brief  Private implementation for TestAuthorizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestAuthorizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestAuthorizationResponse instance.
 */
TestAuthorizationResponsePrivate::TestAuthorizationResponsePrivate(
    TestAuthorizationResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT TestAuthorizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestAuthorizationResponsePrivate::TestAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestAuthorizationResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws

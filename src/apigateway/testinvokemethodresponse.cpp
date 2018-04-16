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

#include "testinvokemethodresponse.h"
#include "testinvokemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::TestInvokeMethodResponse
 *
 * \brief The TestInvokeMethodResponse class encapsulates APIGateway TestInvokeMethod responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::testInvokeMethod
 */

/*!
 * @brief  Constructs a new TestInvokeMethodResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestInvokeMethodResponse::TestInvokeMethodResponse(
        const TestInvokeMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new TestInvokeMethodResponsePrivate(this), parent)
{
    setRequest(new TestInvokeMethodRequest(request));
    setReply(reply);
}

const TestInvokeMethodRequest * TestInvokeMethodResponse::request() const
{
    Q_D(const TestInvokeMethodResponse);
    return static_cast<const TestInvokeMethodRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway TestInvokeMethod response.
 *
 * @param  response  Response to parse.
 */
void TestInvokeMethodResponse::parseSuccess(QIODevice &response)
{
    Q_D(TestInvokeMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class TestInvokeMethodResponsePrivate
 *
 * \brief Private implementation for TestInvokeMethodResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TestInvokeMethodResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestInvokeMethodResponse instance.
 */
TestInvokeMethodResponsePrivate::TestInvokeMethodResponsePrivate(
    TestInvokeMethodResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway TestInvokeMethodResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestInvokeMethodResponsePrivate::parseTestInvokeMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestInvokeMethodResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws

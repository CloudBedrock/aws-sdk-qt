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

#include "testdnsanswerresponse.h"
#include "testdnsanswerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::TestDNSAnswerResponse
 *
 * \brief The TestDNSAnswerResponse class provides an interace for Route53 TestDNSAnswer responses.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::testDNSAnswer
 */

/*!
 * @brief  Constructs a new TestDNSAnswerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestDNSAnswerResponse::TestDNSAnswerResponse(
        const TestDNSAnswerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new TestDNSAnswerResponsePrivate(this), parent)
{
    setRequest(new TestDNSAnswerRequest(request));
    setReply(reply);
}

const TestDNSAnswerRequest * TestDNSAnswerResponse::request() const
{
    Q_D(const TestDNSAnswerResponse);
    return static_cast<const TestDNSAnswerRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53 TestDNSAnswer response.
 *
 * @param  response  Response to parse.
 */
void TestDNSAnswerResponse::parseSuccess(QIODevice &response)
{
    Q_D(TestDNSAnswerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class TestDNSAnswerResponsePrivate
 *
 * \brief Private implementation for TestDNSAnswerResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TestDNSAnswerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestDNSAnswerResponse instance.
 */
TestDNSAnswerResponsePrivate::TestDNSAnswerResponsePrivate(
    TestDNSAnswerResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53 TestDNSAnswerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestDNSAnswerResponsePrivate::parseTestDNSAnswerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestDNSAnswerResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws

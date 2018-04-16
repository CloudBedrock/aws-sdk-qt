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

#include "acceptreservedinstancesexchangequoteresponse.h"
#include "acceptreservedinstancesexchangequoteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AcceptReservedInstancesExchangeQuoteResponse
 *
 * \brief The AcceptReservedInstancesExchangeQuoteResponse class encapsulates EC2 AcceptReservedInstancesExchangeQuote responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::acceptReservedInstancesExchangeQuote
 */

/*!
 * @brief  Constructs a new AcceptReservedInstancesExchangeQuoteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptReservedInstancesExchangeQuoteResponse::AcceptReservedInstancesExchangeQuoteResponse(
        const AcceptReservedInstancesExchangeQuoteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AcceptReservedInstancesExchangeQuoteResponsePrivate(this), parent)
{
    setRequest(new AcceptReservedInstancesExchangeQuoteRequest(request));
    setReply(reply);
}

const AcceptReservedInstancesExchangeQuoteRequest * AcceptReservedInstancesExchangeQuoteResponse::request() const
{
    Q_D(const AcceptReservedInstancesExchangeQuoteResponse);
    return static_cast<const AcceptReservedInstancesExchangeQuoteRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 AcceptReservedInstancesExchangeQuote response.
 *
 * @param  response  Response to parse.
 */
void AcceptReservedInstancesExchangeQuoteResponse::parseSuccess(QIODevice &response)
{
    Q_D(AcceptReservedInstancesExchangeQuoteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AcceptReservedInstancesExchangeQuoteResponsePrivate
 *
 * \brief Private implementation for AcceptReservedInstancesExchangeQuoteResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AcceptReservedInstancesExchangeQuoteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AcceptReservedInstancesExchangeQuoteResponse instance.
 */
AcceptReservedInstancesExchangeQuoteResponsePrivate::AcceptReservedInstancesExchangeQuoteResponsePrivate(
    AcceptReservedInstancesExchangeQuoteResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 AcceptReservedInstancesExchangeQuoteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AcceptReservedInstancesExchangeQuoteResponsePrivate::parseAcceptReservedInstancesExchangeQuoteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptReservedInstancesExchangeQuoteResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

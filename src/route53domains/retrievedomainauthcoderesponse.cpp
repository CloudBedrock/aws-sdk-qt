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

#include "retrievedomainauthcoderesponse.h"
#include "retrievedomainauthcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RetrieveDomainAuthCodeResponse
 *
 * \brief The RetrieveDomainAuthCodeResponse class encapsulates Route53Domains RetrieveDomainAuthCode responses.
 *
 * \ingroup Route53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::retrieveDomainAuthCode
 */

/*!
 * @brief  Constructs a new RetrieveDomainAuthCodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RetrieveDomainAuthCodeResponse::RetrieveDomainAuthCodeResponse(
        const RetrieveDomainAuthCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new RetrieveDomainAuthCodeResponsePrivate(this), parent)
{
    setRequest(new RetrieveDomainAuthCodeRequest(request));
    setReply(reply);
}

const RetrieveDomainAuthCodeRequest * RetrieveDomainAuthCodeResponse::request() const
{
    Q_D(const RetrieveDomainAuthCodeResponse);
    return static_cast<const RetrieveDomainAuthCodeRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53Domains RetrieveDomainAuthCode response.
 *
 * @param  response  Response to parse.
 */
void RetrieveDomainAuthCodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(RetrieveDomainAuthCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class RetrieveDomainAuthCodeResponsePrivate
 *
 * \brief Private implementation for RetrieveDomainAuthCodeResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RetrieveDomainAuthCodeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RetrieveDomainAuthCodeResponse instance.
 */
RetrieveDomainAuthCodeResponsePrivate::RetrieveDomainAuthCodeResponsePrivate(
    RetrieveDomainAuthCodeResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53Domains RetrieveDomainAuthCodeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RetrieveDomainAuthCodeResponsePrivate::parseRetrieveDomainAuthCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetrieveDomainAuthCodeResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws

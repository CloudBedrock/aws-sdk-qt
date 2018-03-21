/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disabledomainautorenewresponse.h"
#include "disabledomainautorenewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53Domains {

/**
 * @class  DisableDomainAutoRenewResponse
 *
 * @brief  Handles Route53Domains DisableDomainAutoRenew responses.
 *
 * @see    Route53DomainsClient::disableDomainAutoRenew
 */

/**
 * @brief  Constructs a new DisableDomainAutoRenewResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableDomainAutoRenewResponse::DisableDomainAutoRenewResponse(
        const DisableDomainAutoRenewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new DisableDomainAutoRenewResponsePrivate(this), parent)
{
    setRequest(new DisableDomainAutoRenewRequest(request));
    setReply(reply);
}

const DisableDomainAutoRenewRequest * DisableDomainAutoRenewResponse::request() const
{
    Q_D(const DisableDomainAutoRenewResponse);
    return static_cast<const DisableDomainAutoRenewRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains DisableDomainAutoRenew response.
 *
 * @param  response  Response to parse.
 */
void DisableDomainAutoRenewResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableDomainAutoRenewResponsePrivate
 *
 * @brief  Private implementation for DisableDomainAutoRenewResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableDomainAutoRenewResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableDomainAutoRenewResponse instance.
 */
DisableDomainAutoRenewResponsePrivate::DisableDomainAutoRenewResponsePrivate(
    DisableDomainAutoRenewQueueResponse * const q) : DisableDomainAutoRenewPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains DisableDomainAutoRenewResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableDomainAutoRenewResponsePrivate::DisableDomainAutoRenewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableDomainAutoRenewResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace AWS

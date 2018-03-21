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

#include "updatedomaincontactprivacyresponse.h"
#include "updatedomaincontactprivacyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53Domains {

/**
 * @class  UpdateDomainContactPrivacyResponse
 *
 * @brief  Handles Route53Domains UpdateDomainContactPrivacy responses.
 *
 * @see    Route53DomainsClient::updateDomainContactPrivacy
 */

/**
 * @brief  Constructs a new UpdateDomainContactPrivacyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDomainContactPrivacyResponse::UpdateDomainContactPrivacyResponse(
        const UpdateDomainContactPrivacyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new UpdateDomainContactPrivacyResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainContactPrivacyRequest(request));
    setReply(reply);
}

const UpdateDomainContactPrivacyRequest * UpdateDomainContactPrivacyResponse::request() const
{
    Q_D(const UpdateDomainContactPrivacyResponse);
    return static_cast<const UpdateDomainContactPrivacyRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains UpdateDomainContactPrivacy response.
 *
 * @param  response  Response to parse.
 */
void UpdateDomainContactPrivacyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDomainContactPrivacyResponsePrivate
 *
 * @brief  Private implementation for UpdateDomainContactPrivacyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainContactPrivacyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDomainContactPrivacyResponse instance.
 */
UpdateDomainContactPrivacyResponsePrivate::UpdateDomainContactPrivacyResponsePrivate(
    UpdateDomainContactPrivacyQueueResponse * const q) : UpdateDomainContactPrivacyPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains UpdateDomainContactPrivacyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDomainContactPrivacyResponsePrivate::UpdateDomainContactPrivacyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainContactPrivacyResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace AWS

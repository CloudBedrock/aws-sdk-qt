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

#include "listkeypoliciesresponse.h"
#include "listkeypoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  ListKeyPoliciesResponse
 *
 * @brief  Handles KMS ListKeyPolicies responses.
 *
 * @see    KMSClient::listKeyPolicies
 */

/**
 * @brief  Constructs a new ListKeyPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListKeyPoliciesResponse::ListKeyPoliciesResponse(
        const ListKeyPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new ListKeyPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListKeyPoliciesRequest(request));
    setReply(reply);
}

const ListKeyPoliciesRequest * ListKeyPoliciesResponse::request() const
{
    Q_D(const ListKeyPoliciesResponse);
    return static_cast<const ListKeyPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a KMS ListKeyPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListKeyPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListKeyPoliciesResponsePrivate
 *
 * @brief  Private implementation for ListKeyPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListKeyPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListKeyPoliciesResponse instance.
 */
ListKeyPoliciesResponsePrivate::ListKeyPoliciesResponsePrivate(
    ListKeyPoliciesQueueResponse * const q) : ListKeyPoliciesPrivate(q)
{

}

/**
 * @brief  Parse an KMS ListKeyPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListKeyPoliciesResponsePrivate::ListKeyPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListKeyPoliciesResponse"));
    /// @todo
}

} // namespace KMS
} // namespace AWS

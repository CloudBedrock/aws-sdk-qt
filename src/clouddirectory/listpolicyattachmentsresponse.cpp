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

#include "listpolicyattachmentsresponse.h"
#include "listpolicyattachmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListPolicyAttachmentsResponse
 *
 * @brief  Handles CloudDirectory ListPolicyAttachments responses.
 *
 * @see    CloudDirectoryClient::listPolicyAttachments
 */

/**
 * @brief  Constructs a new ListPolicyAttachmentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPolicyAttachmentsResponse::ListPolicyAttachmentsResponse(
        const ListPolicyAttachmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListPolicyAttachmentsResponsePrivate(this), parent)
{
    setRequest(new ListPolicyAttachmentsRequest(request));
    setReply(reply);
}

const ListPolicyAttachmentsRequest * ListPolicyAttachmentsResponse::request() const
{
    Q_D(const ListPolicyAttachmentsResponse);
    return static_cast<const ListPolicyAttachmentsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListPolicyAttachments response.
 *
 * @param  response  Response to parse.
 */
void ListPolicyAttachmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPolicyAttachmentsResponsePrivate
 *
 * @brief  Private implementation for ListPolicyAttachmentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPolicyAttachmentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPolicyAttachmentsResponse instance.
 */
ListPolicyAttachmentsResponsePrivate::ListPolicyAttachmentsResponsePrivate(
    ListPolicyAttachmentsQueueResponse * const q) : ListPolicyAttachmentsPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListPolicyAttachmentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPolicyAttachmentsResponsePrivate::ListPolicyAttachmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPolicyAttachmentsResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS

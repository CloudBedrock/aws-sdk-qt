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

#include "cancelkeydeletionresponse.h"
#include "cancelkeydeletionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  CancelKeyDeletionResponse
 *
 * @brief  Handles KMS CancelKeyDeletion responses.
 *
 * @see    KMSClient::cancelKeyDeletion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelKeyDeletionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new CancelKeyDeletionResponsePrivate(this), parent)
{
    setRequest(new CancelKeyDeletionRequest(request));
    setReply(reply);
}

const CancelKeyDeletionRequest * CancelKeyDeletionResponse::request() const
{
    Q_D(const CancelKeyDeletionResponse);
    return static_cast<const CancelKeyDeletionRequest *>(d->request);
}

/**
 * @brief  Parse a KMS CancelKeyDeletion response.
 *
 * @param  response  Response to parse.
 */
void CancelKeyDeletionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelKeyDeletionResponsePrivate
 *
 * @brief  Private implementation for CancelKeyDeletionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelKeyDeletionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelKeyDeletionResponse instance.
 */
CancelKeyDeletionResponsePrivate::CancelKeyDeletionResponsePrivate(
    CancelKeyDeletionQueueResponse * const q) : CancelKeyDeletionPrivate(q)
{

}

/**
 * @brief  Parse an KMS CancelKeyDeletionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelKeyDeletionResponsePrivate::CancelKeyDeletionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelKeyDeletionResponse"));
    /// @todo
}

} // namespace KMS
} // namespace AWS

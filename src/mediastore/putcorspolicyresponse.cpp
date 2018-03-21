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

#include "putcorspolicyresponse.h"
#include "putcorspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaStore {

/**
 * @class  PutCorsPolicyResponse
 *
 * @brief  Handles MediaStore PutCorsPolicy responses.
 *
 * @see    MediaStoreClient::putCorsPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutCorsPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new PutCorsPolicyResponsePrivate(this), parent)
{
    setRequest(new PutCorsPolicyRequest(request));
    setReply(reply);
}

const PutCorsPolicyRequest * PutCorsPolicyResponse::request() const
{
    Q_D(const PutCorsPolicyResponse);
    return static_cast<const PutCorsPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStore PutCorsPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutCorsPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutCorsPolicyResponsePrivate
 *
 * @brief  Private implementation for PutCorsPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutCorsPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutCorsPolicyResponse instance.
 */
PutCorsPolicyResponsePrivate::PutCorsPolicyResponsePrivate(
    PutCorsPolicyQueueResponse * const q) : PutCorsPolicyPrivate(q)
{

}

/**
 * @brief  Parse an MediaStore PutCorsPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutCorsPolicyResponsePrivate::PutCorsPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutCorsPolicyResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace AWS

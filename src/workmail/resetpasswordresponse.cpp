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

#include "resetpasswordresponse.h"
#include "resetpasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkMail {

/**
 * @class  ResetPasswordResponse
 *
 * @brief  Handles WorkMail ResetPassword responses.
 *
 * @see    WorkMailClient::resetPassword
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetPasswordResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new ResetPasswordResponsePrivate(this), parent)
{
    setRequest(new ResetPasswordRequest(request));
    setReply(reply);
}

const ResetPasswordRequest * ResetPasswordResponse::request() const
{
    Q_D(const ResetPasswordResponse);
    return static_cast<const ResetPasswordRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail ResetPassword response.
 *
 * @param  response  Response to parse.
 */
void ResetPasswordResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetPasswordResponsePrivate
 *
 * @brief  Private implementation for ResetPasswordResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetPasswordResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetPasswordResponse instance.
 */
ResetPasswordResponsePrivate::ResetPasswordResponsePrivate(
    ResetPasswordQueueResponse * const q) : ResetPasswordPrivate(q)
{

}

/**
 * @brief  Parse an WorkMail ResetPasswordResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetPasswordResponsePrivate::ResetPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetPasswordResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace AWS

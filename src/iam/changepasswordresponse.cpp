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

#include "changepasswordresponse.h"
#include "changepasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ChangePasswordResponse
 *
 * @brief  Handles IAM ChangePassword responses.
 *
 * @see    IAMClient::changePassword
 */

/**
 * @brief  Constructs a new ChangePasswordResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ChangePasswordResponse::ChangePasswordResponse(
        const ChangePasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ChangePasswordResponsePrivate(this), parent)
{
    setRequest(new ChangePasswordRequest(request));
    setReply(reply);
}

const ChangePasswordRequest * ChangePasswordResponse::request() const
{
    Q_D(const ChangePasswordResponse);
    return static_cast<const ChangePasswordRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ChangePassword response.
 *
 * @param  response  Response to parse.
 */
void ChangePasswordResponse::parseSuccess(QIODevice &response)
{
    Q_D(ChangePasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ChangePasswordResponsePrivate
 *
 * @brief  Private implementation for ChangePasswordResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ChangePasswordResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ChangePasswordResponse instance.
 */
ChangePasswordResponsePrivate::ChangePasswordResponsePrivate(
    ChangePasswordResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM ChangePasswordResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ChangePasswordResponsePrivate::parseChangePasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangePasswordResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws

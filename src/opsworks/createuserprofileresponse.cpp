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

#include "createuserprofileresponse.h"
#include "createuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  CreateUserProfileResponse
 *
 * @brief  Handles OpsWorks CreateUserProfile responses.
 *
 * @see    OpsWorksClient::createUserProfile
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUserProfileResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new CreateUserProfileResponsePrivate(this), parent)
{
    setRequest(new CreateUserProfileRequest(request));
    setReply(reply);
}

const CreateUserProfileRequest * CreateUserProfileResponse::request() const
{
    Q_D(const CreateUserProfileResponse);
    return static_cast<const CreateUserProfileRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks CreateUserProfile response.
 *
 * @param  response  Response to parse.
 */
void CreateUserProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateUserProfileResponsePrivate
 *
 * @brief  Private implementation for CreateUserProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateUserProfileResponse instance.
 */
CreateUserProfileResponsePrivate::CreateUserProfileResponsePrivate(
    CreateUserProfileQueueResponse * const q) : CreateUserProfilePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks CreateUserProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateUserProfileResponsePrivate::CreateUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserProfileResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS

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

#include "createapplicationversionresponse.h"
#include "createapplicationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::CreateApplicationVersionResponse
 *
 * \brief The CreateApplicationVersionResponse class encapsulates ServerlessApplicationRepository CreateApplicationVersion responses.
 *
 * \ingroup ServerlessApplicationRepository
 *
 *  The AWS Serverless Application Repository makes it easy for developers and enterprises to quickly find and deploy
 *  serverless applications in the AWS Cloud. For more information about serverless applications, see Serverless Computing
 *  and Applications on the AWS website.</p><p>The AWS Serverless Application Repository is deeply integrated with the AWS
 *  Lambda console, so that developers of all levels can get started with serverless computing without needing to learn
 *  anything new. You can use category keywords to browse for applications such as web and mobile backends, data processing
 *  applications, or chatbots. You can also search for applications by name, publisher, or event source. To use an
 *  application, you simply choose it, configure any required fields, and deploy it with a few clicks. </p><p>You can also
 *  easily publish applications, sharing them publicly with the community at large, or privately within your team or across
 *  your organization. To publish a serverless application (or app), you can use the AWS Management Console, AWS Command
 *  Line Interface (AWS CLI), or AWS SDKs to upload the code. Along with the code, you upload a simple manifest file, also
 *  known as the AWS Serverless Application Model (AWS SAM) template. For more information about AWS SAM, see AWS Serverless
 *  Application Model (AWS SAM) on the AWS Labs GitHub repository.</p><p>The AWS Serverless Application Repository Developer
 *  Guide contains more information about the two developer experiences available:</p><ul> <li>
 * 
 *  Consuming Applications – Browse for applications and view information about them, including source code and readme
 *  files. Also install, configure, and deploy applications of your choosing.
 * 
 *  </p
 * 
 *  Publishing Applications – Configure and upload applications to make them available to other developers, and publish new
 *  versions of applications.
 *
 * \sa ServerlessApplicationRepositoryClient::createApplicationVersion
 */

/*!
 * @brief  Constructs a new CreateApplicationVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateApplicationVersionResponse::CreateApplicationVersionResponse(
        const CreateApplicationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServerlessApplicationRepositoryResponse(new CreateApplicationVersionResponsePrivate(this), parent)
{
    setRequest(new CreateApplicationVersionRequest(request));
    setReply(reply);
}

const CreateApplicationVersionRequest * CreateApplicationVersionResponse::request() const
{
    Q_D(const CreateApplicationVersionResponse);
    return static_cast<const CreateApplicationVersionRequest *>(d->request);
}

/*!
 * @brief  Parse a ServerlessApplicationRepository CreateApplicationVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateApplicationVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateApplicationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateApplicationVersionResponsePrivate
 *
 * \brief Private implementation for CreateApplicationVersionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateApplicationVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateApplicationVersionResponse instance.
 */
CreateApplicationVersionResponsePrivate::CreateApplicationVersionResponsePrivate(
    CreateApplicationVersionResponse * const q) : ServerlessApplicationRepositoryResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServerlessApplicationRepository CreateApplicationVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateApplicationVersionResponsePrivate::parseCreateApplicationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApplicationVersionResponse"));
    /// @todo
}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
